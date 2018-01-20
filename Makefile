MODULES=httpdocs/sites/all/modules/custom
THEMES=httpdocs/sites/all/themes/custom
TRANSLATABLE=$(addprefix $(MODULES)/,\
	pw_blog/pw_blog.module \
	pw_dialogues/pw_dialogues.module \
	pw_globals/pw_globals.module \
	pw_petitions/pw_petitions.module \
	pw_poll/pw_poll.module \
	pw_profiles/pw_profiles.module \
	pw_question_form/pw_question_form.module \
	pw_sidejobs/pw_sidejobs.module)\
	$(THEMES)/parliamentwatch/js/script.js \
	$(THEMES)/parliamentwatch/template.php \
	$(wildcard $(THEMES)/parliamentwatch/templates/*.tpl.php)

null  :=
space := $(null) #
comma := ,

general.pot: $(TRANSLATABLE)
	-drush potx single --files=$(subst httpdocs/,,$(subst $(space),$(comma),$(strip $(TRANSLATABLE))))
	mv httpdocs/general.pot .
	rm httpdocs/installer.pot

clean:
	rm *.pot
