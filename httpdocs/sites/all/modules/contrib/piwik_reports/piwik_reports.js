
(function ($) {
  Drupal.behaviors.piwik_reports = {
    attach: function(context, settings) {

      var pk_url = settings.piwik_reports.url
      var data
      var header = "<table class='sticky-enabled sticky-table'><tbody></tbody></table>";
      var item

      // Add the table and show "Loading data..." status message for long running requests.
      $("#piwikpageviews").html(header);
      $("#piwikpageviews > table > tbody").html("<tr><td>" + Drupal.t('Loading data...') + "</td></tr>");

      // Get data from remote Piwik server.
      $.getJSON(pk_url, function(data){
        $.each(data, function(key, val) {
          item = val;
        });
        var pk_content = "";
        if (item != undefined) {
          if (item.nb_visits) {
            pk_content += "<tr><td>" + Drupal.t('Visits') + "</td>";
            pk_content += "<td>" + item.nb_visits + "</td></tr>" ;
          }
          if (item.nb_hits) {
            pk_content += "<tr><td>" + Drupal.t('Page views') + "</td>";
            pk_content += "<td>" + item.nb_hits + "</td></tr>" ;
          }
        }
        // Push data into table and replace "Loading data..." status message.
        if (pk_content) {
          $("#piwikpageviews > table > tbody").html(pk_content);
        }
        else {
          $("#piwikpageviews > table > tbody > tr > td").html(Drupal.t('No data available.'));
        }
      });

    }

  };
  Drupal.behaviors.piwik_full_report = {
    attach: function(context, settings) {

      var pk_url = settings.piwik_reports.url;
      var data;
      var table = '<table><tbody></tbody></table>';
      var item;

      // Add the table and show "Loading data..." status message for long running requests.
      $('#piwik-full-report').html(table);
      $('#piwik-full-report > table > tbody').html('<tr><td>' + Drupal.t('Loading data...') + '</td></tr>');

      // Get data from remote Piwik server.
      $.getJSON(pk_url, function(data) {
        $.each(data, function(key, val) {
          item = val;
        });
        var pk_content = '';
        if (item != undefined) {
          if (item.avg_time_generation) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Average generation time') + '</td>';
            pk_content += '<td>' + item.avg_time_generation + '</td></tr>' ;
          }
          if (item.max_time_generation) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Max generation time') + '</td>';
            pk_content += '<td>' + item.max_time_generation + '</td></tr>' ;
          }
          if (item.min_time_generation) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Min generation time') + '</td>';
            pk_content += '<td>' + item.min_time_generation + '</td></tr>';
          }
          if (item.avg_time_on_page) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Average time spent, in seconds, on this page') + '</td>';
            pk_content += '<td>' + item.avg_time_on_page + '</td></tr>';
          }
          if (item.bounce_rate) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Ratio of visitors leaving the website after landing on this page') + '</td>';
            pk_content += '<td>' + item.bounce_rate + '</td></tr>';
          }
          if (item.entry_bounce_count) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Number of visits that started on this page, and bounced (viewed only one page)') + '</td>';
            pk_content += '<td>' + item.entry_bounce_count + '</td></tr>';
          }
          if (item.entry_nb_actions) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Number of page views for visits that started on this page') + '</td>';
            pk_content += '<td>' + item.entry_nb_actions + '</td></tr>';
          }
          if (item.entry_nb_visits) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Number of visits that started on this page') + '</td>';
            pk_content += '<td>' + item.entry_nb_visits + '</td></tr>';
          }
          if (item.entry_sum_visit_length) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Time spent, in seconds, by visits that started on this page') + '</td>';
            pk_content += "<td>" + item.entry_sum_visit_length + "</td></tr>" ;
          }
          if (item.exit_nb_visits) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Number of visits that finished on this page') + '</td>';
            pk_content += '<td>' + item.exit_nb_visits + '</td></tr>';
          }
          if (item.exit_rate) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Ratio of visitors that do not view any other page after this page') + '</td>';
            pk_content += '<td>' + item.exit_rate + '</td></tr>';
          }
          if (item.nb_hits) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Number of views on this page') + '</td>';
            pk_content += '<td>' + item.nb_hits + '</td></tr>';
          }
          if (item.nb_visits) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Number of Visits (30 min of inactivity considered a new visit)') + '</td>';
            pk_content += '<td>' + item.nb_visits + '</td></tr>';
          }
          if (item.sum_daily_nb_uniq_visitors) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Number of unique visitors that started their visit on this page') + '</td>';
            pk_content += '<td>' + item.sum_daily_nb_uniq_visitors + '</td></tr>' ;
          }
          if (item.sum_daily_entry_nb_uniq_visitors) {
            pk_content += '<tr class="even"><td>' + Drupal.t('Sum of daily unique visitors that started their visit on this page') + '</td>';
            pk_content += '<td>' + item.sum_daily_entry_nb_uniq_visitors + '</td></tr>';
          }
          if (item.sum_time_spent) {
            pk_content += '<tr class="odd"><td>' + Drupal.t('Sum time spent') + '</td>';
            pk_content += '<td>' + item.sum_time_spent + '</td></tr>';
          }
        }
        // Push data into table and replace "Loading data..." status message.
        if (pk_content) {
          $('#piwik-full-report > table > tbody').html(pk_content);
        }
        else {
          $('#piwik-full-report > table > tbody > tr > td').html(Drupal.t('No data available.'));
        }
      });

    }

  };
})(jQuery);
