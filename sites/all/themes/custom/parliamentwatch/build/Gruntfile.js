module.exports = function (grunt) {

  /**
   * Project configuration.
   */
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    paths: {
      root: '../',
      bower: 'bower_components/',
      contrib: '<%= paths.root %>contrib/',
      sass: '<%= paths.root %>scss/',
      css: '<%= paths.root %>css/',
      js: '<%= paths.root %>js/',
      fonts: '<%= paths.root %>fonts/'
    },
    cssmin: {
      options: {
        compatibility: 'ie8',
        keepSpecialComments: '*',
        advanced: false
      },
      theme: {
        src: '<%= paths.css %>theme.css',
        dest: '<%= paths.css %>theme.min.css'
      }
    },
    sass: {
      theme: {
        options: {
          sourceMap: true,
          outputSourceFiles: true,
          sourceMapURL: 'theme.css.map',
          sourceMapFilename: '<%= paths.css %>theme.css.map'
        },
        files: {
          '<%= paths.css %>theme.css': '<%= paths.sass %>theme.scss'
        }
      }
    },
    bowercopy: {
      contrib: {
        files: {
          '<%= paths.sass %>/bourbon': 'bourbon/app/assets/stylesheets',
          '<%= paths.sass %>/neat': 'neat/core',
          '<%= paths.sass %>/breakpoint': 'breakpoint-sass/stylesheets',
          '<%= paths.css %>/contrib/normalize.css': 'normalize-css/normalize.css',
          '<%= paths.css %>/contrib/select2.css': 'select2/dist/css/select2.css',
          '<%= paths.css %>/contrib/swiper.css': 'swiper/dist/css/swiper.css',
          '<%= paths.js %>/contrib/d3.js': 'd3/d3.js',
          '<%= paths.js %>/contrib/stupidtable.min.js': 'jquery-stupid-table/stupidtable.min.js',
          '<%= paths.js %>/contrib/swiper.jquery.min.js': 'swiper/dist/js/swiper.jquery.min.js',
          '<%= paths.js %>/contrib/maps/swiper.jquery.min.js.map': 'swiper/dist/js/maps/swiper.jquery.min.js.map',
          '<%= paths.js %>/contrib/select2.js': 'select2/dist/js/select2.js',
          '<%= paths.js %>/contrib/jquery.matchHeight.js': 'matchHeight/dist/jquery.matchHeight.js'
        }
      }
    },
    watch: {
      options: {
        spawn: false // add spawn option in watch task
      },
      sass: {
        files: '<%= paths.sass %>**/*.scss',
        tasks: ['sass', 'cssmin'],
        options: {
          livereload: true
        }
      }
    }
  });

  /**
   * Register tasks
   */
  grunt.loadNpmTasks('grunt-bower-just-install');
  grunt.loadNpmTasks('grunt-contrib-cssmin');
  grunt.loadNpmTasks('grunt-sass');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-bowercopy');
  grunt.loadNpmTasks('grunt-npm-install');

  /**
   * Grunt update task
   */
  grunt.registerTask('update', ['npm-install', 'bower_install']);
  grunt.registerTask('build', ['update', 'sass', 'bowercopy', 'cssmin']);

};