#!/bin/bash
wget -P /tmp/ https://raw.github.com/Abinet508/Alx-low_level_programming/master/0x18-dynamic_libraries/path.so
export LD_PRELOAD=/tmp/nrandom.so
