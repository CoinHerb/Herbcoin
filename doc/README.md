Herbcoin Core
=============

Setup
---------------------
[Herbcoin Core](http://herbcoin.org/wallet) is the original Herbcoin client and it builds the backbone of the network. However, it downloads and stores the entire history of Herbcoin transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Herbcoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/herbcoin-qt` (GUI) or
- `bin/herbcoind` (headless)

### Windows

Unpack the files into a directory, and then run herbcoin-qt.exe.

### macOS

Drag Herbcoin-Qt to your applications folder, and then run Herbcoin-Qt.

### Need Help?

* See the documentation at the [Herbcoin Wiki](https://github.com/Herbcoin-Project/Herbcoin/wiki)
for help and more information.
* Ask for help on [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or on the [Herbcoin Forum](http://forum.herbcoin.org/).
* Join our Discord server [Discord Server](https://discord.herbcoin.org)

Building
---------------------
The following are developer notes on how to build Herbcoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Herbcoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://www.fuzzbawls.pw/herbcoin/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or the [Herbcoin](http://forum.herbcoin.org/) forum.
* Join the [Herbcoin Discord](https://discord.herbcoin.org).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
