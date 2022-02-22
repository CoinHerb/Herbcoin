
Debian
====================
This directory contains files used to package herbcoind/herbcoin-qt
for Debian-based Linux systems. If you compile herbcoind/herbcoin-qt yourself, there are some useful files here.

## herbcoin: URI support ##


herbcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install herbcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your herbcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/herbcoin128.png` to `/usr/share/pixmaps`

herbcoin-qt.protocol (KDE)

