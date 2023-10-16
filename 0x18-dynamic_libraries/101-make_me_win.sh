#!/bin/bash
wget -O /tmp/win.so https://github.com/ib-babs/alx-low_level_programming/raw/master/0x018-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so