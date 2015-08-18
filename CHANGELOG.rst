^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package librms
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.0.3 (2015-08-18)
------------------
* Merge pull request #2 from jpgr87/develop
  Use find_library to detect libmysqlclient
* Use find_library to detect libmysqlclient
  Fedora packages libmysqlclient.so in the mysql subdirectory of the
  system library directory, which means that passing -lmysqlclient
  to the linker will result in a linking error.  This commit adds
  logic to search for libmysqlclient.so on the current library paths
  as well as the system-wide path /usr/lib/mysql.
  Signed-off-by: Rich Mattes <richmattes@gmail.com>
* Contributors: Rich Mattes, Russell Toris

0.0.2 (2014-12-12)
------------------
* fix for header installs
* Contributors: Russell Toris

0.0.1 (2014-12-02)
------------------
* first working version of librms
* studies and conditions
* Initial commit
* Contributors: Russell Toris
