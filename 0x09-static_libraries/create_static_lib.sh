#!/bin/bash
gcc -c *.c
ar -rc libliball.a *.o
ranlib liball.a
