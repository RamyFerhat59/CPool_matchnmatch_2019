#!/bin/bash

for filename in *.c
do
    gcc -c $filename
done

ar rc libmy.a *.o

