#!/bin/bash
gcc *.o -shared -o 4libc.so
LD_PRELOAD=$PWD/4libc.so
