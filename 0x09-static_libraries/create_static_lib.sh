#!/bin/bash
gcc -c -Wall -Werror -Wextra -std=gnu89 -pedantic *.c;
ar rc liball.a *.o;
ranlib liball.a;
