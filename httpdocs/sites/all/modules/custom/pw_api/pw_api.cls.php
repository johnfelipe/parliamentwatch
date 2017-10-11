<?php

/**
* class pw_api
* reading from drupal api.
*
*/

class pw_api {

  /**
  * @param $drupal_username, $drupal_password
  *   credentials for drupal login.
  */
  protected $drupal_username;
  protected $drupal_password;

  public function __construct($drupal_username=FALSE, $drupal_password=FALSE){
    $this->drupal_username = $drupal_username;
    $this->drupal_password = $drupal_password;
  }

  /**
  * readFromApi().
  * @param $api_url
  *   full url to call.
  * @return string
  *   returns the xml, json document from the drupal api or FALSE otherwise.
  */
  public function readFromApi($api_url){

    // delete cookie
    if(file_exists("/tmp/cookie_drupal.txt")){
      unlink("/tmp/cookie_drupal.txt");
    }

    // init curl
    $crl = curl_init();
    curl_setopt($crl, CURLOPT_FOLLOWLOCATION, 1);
    curl_setopt($crl, CURLOPT_RETURNTRANSFER, 1);

    // prepare login
    if(!empty($this->drupal_username)){

      // prepare login url
      $parsed_url = parse_url($api_url);
      if(!empty($parsed_url['user'])){
        $login_url = $parsed_url['scheme'].'://'.$parsed_url['user'].':'.$parsed_url['pass'].'@'.$parsed_url['host'].'/user';
      }
      else{
        $login_url = $parsed_url['scheme'].'://'.$parsed_url['host'].'/user';
      }

      // array with post data
      $postdata = array(
        "name" => $this->drupal_username,
        "pass" => $this->drupal_password,
        "form_id" => "user_login",
        "op" => "Log in",
        );

      // configure curl for login
      curl_setopt($crl, CURLOPT_URL, $login_url);
      curl_setopt($crl, CURLOPT_COOKIEJAR, "/tmp/cookie_drupal.txt");
      curl_setopt($crl, CURLOPT_POST, 1);
      curl_setopt($crl, CURLOPT_POSTFIELDS, $postdata);

      // perform login
      curl_exec($crl);

      // exit if login has failed
      $header = curl_getinfo($crl);
      if($header['redirect_count'] == 0){
        return FALSE;
      }
    }

    // read from api
    curl_setopt($crl, CURLOPT_URL, $api_url);
    $result = curl_exec($crl);
    curl_close($crl);

    // delete cookie
    if(file_exists("/tmp/cookie_drupal.txt")){
      unlink("/tmp/cookie_drupal.txt");
    }

    // return the result
    return $result;
  }
}
