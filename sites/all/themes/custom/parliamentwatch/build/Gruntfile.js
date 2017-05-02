module.exports = function(grunt) {

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
            js: '<%= paths.root %>javaScript/',
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
        watch: {
            options: {
                spawn: false // add spawn option in watch task
            },
            sass: {
                files: '<%= paths.sass %>**/*.scss',
                tasks: ['sass','cssmin'],
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
    grunt.loadNpmTasks('grunt-npm-install');

    /**
     * Grunt update task
     */
    grunt.registerTask('update', ['npm-install', 'bower_install']);
    grunt.registerTask('build', ['update', 'sass', 'cssmin']);

};