jQuery(document).ready(function() {

  // sets values and labels
  function pw_donation_form_multiply(){

    // retrieve values
    var pw_amount = jQuery("input:radio[name ='submitted[fieldset_donationform_yourdonation][donation_amount]']:checked").val();
    var pw_interval = jQuery("input:radio[name ='submitted[fieldset_donationform_yourdonation][donation_frequency]']:checked").val();

    // when one time donation multiple by 1
    pw_interval = pw_interval == 0?1:pw_interval;

    jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-1 + label").text(pw_interval * 10 + " €");
    jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-2 + label").text(pw_interval * 20 + " €");
    jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-3 + label").text(pw_interval * 50 + " €");
    jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-4 + label").text(pw_interval * 100 + " €");
  }

  // set values and labels
  jQuery(".webform-component--fieldset-donationform-yourdonation--donation-amount, .webform-component--fieldset-donationform-yourdonation--donation-frequency").click(function() {
    pw_donation_form_multiply();
  });

  // call the function when page is ready
  pw_donation_form_multiply();
});
