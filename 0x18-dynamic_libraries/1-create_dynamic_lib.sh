#!/bin/bash
gcc *.c -c -fPIC
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
