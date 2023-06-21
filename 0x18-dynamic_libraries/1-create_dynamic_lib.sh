#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
rm *.o