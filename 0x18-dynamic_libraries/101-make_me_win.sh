#!/bin/bash
gcc *.o -shared -o libruin.so
LD_PRELOAD=$PWD/libruin.so
