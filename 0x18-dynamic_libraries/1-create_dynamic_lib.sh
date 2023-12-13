#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -0 out.o
gcc out.o -shared -o liball.so