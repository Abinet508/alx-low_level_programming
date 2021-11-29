#!/bin/bash
wget -P /tmp/ https://github.com/Abinet508/alx-low_level_programming/blob/main/0x18-dynamic_libraries/path.so?raw=true
export LD_PRELOAD=/tmp/path.so
