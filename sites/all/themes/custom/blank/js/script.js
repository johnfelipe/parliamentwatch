$(document).ready( function(){
  var pymChild = new pym.Child({ id: 'awpym' });
  var searchForm = $("form[action*='bundestag/profile']");
  if (searchForm) {
    searchForm.submit(function(e){
      pymChild.sendMessage('awSearchSubmit', searchForm.serialize());
    });
  }
  if (typeof twttr !== 'undefined') {
    twttr.events.bind(
      'loaded',
      function (event) {
        window.dispatchEvent(new Event('resize'));
      }
    );
  }
});
