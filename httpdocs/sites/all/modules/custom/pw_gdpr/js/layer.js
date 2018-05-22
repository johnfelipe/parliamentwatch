jQuery(document).ready(function() {
  jQuery('.agree-button').click(function() {
    _paq.push(['rememberConsentGiven']);
  });
  if (Drupal.eu_cookie_compliance.hasAgreed()){
    _paq.push(['rememberConsentGiven']);
  }
});