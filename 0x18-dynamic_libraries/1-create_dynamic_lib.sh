#!/bin/bash
gcc *.c -fPIC -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

