# vim:set noet ts=4:
#
# ibus - The Input Bus
#
# Copyright (c) 2007-2014 Peng Huang <shawn.p.huang@gmail.com>
# Copyright (c) 2015-2019 Takao Fujiwara <takao.fujiwara1@gmail.com>
# Copyright (c) 2007-2019 Red Hat, Inc.
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
# USA

ibussetup_PYTHON = \
    emojilang.py \
    enginecombobox.py \
    enginedialog.py \
    enginetreeview.py \
    engineabout.py \
    i18n.py \
    icon.py \
    keyboardshortcut.py \
    main.py \
    $(NULL)

ibussetup_DATA = \
    setup.ui \
    $(NULL)

bin_SCRIPTS = ibus-setup
ibussetupdir = $(pkgdatadir)/setup

ibus-setup: ibus-setup.in
	$(AM_V_GEN) sed -e "s|\@datarootdir\@|$(datarootdir)|g" \
	                -e "s|\@localedir\@|$(localedir)|g" \
	                -e "s|\@libexecdir\@|$(libexecdir)|g" \
	                -e "s|\@prefix\@|$(prefix)|g" \
	                -e "s|\@PYTHON\@|$(PYTHON)|g" \
	$< > $@.tmp && \
	mv $@.tmp $@

desktop_notrans_files = ibus-setup.desktop
desktop_DATA = org.freedesktop.IBus.Setup.desktop
desktopdir = $(datadir)/applications
org.freedesktop.IBus.Setup.desktop: ibus-setup.desktop
	$(AM_V_GEN) $(MSGFMT) --desktop --template $< -d $(top_srcdir)/po -o $@

man_one_DATA = ibus-setup.1
man_onedir = $(mandir)/man1

CLEANFILES = \
    $(desktop_DATA) \
    *.pyc \
    ibus-setup \
    $(NULL)

EXTRA_DIST = \
    $(desktop_notrans_files) \
    ibus-setup.in \
    setup.ui \
    $(NULL)

test:
	$(ENV_IBUS_TEST) \
		PYTHONPATH=$(top_srcdir) \
		IBUS_PREFIX="@prefix@" \
		IBUS_LOCALEDIR="@localedir@" \
		$(PYTHON) \
		$(srcdir)/main.py

-include $(top_srcdir)/git.mk
