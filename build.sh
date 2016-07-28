#!/bin/bash
systemctl stop orkaudio.service
cd orkbasecxx
make clean&& make & make install
cd ..
cd orkaudio
make clean&& make & make install
cp -fu /home/hipih/down/config2.xml /etc/orkaudio/config.xml

