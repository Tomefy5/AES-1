#!/bin/bash

g++ -c ./main.cpp -o ./compile/main.o 
g++ -c ./fonctions/encryption.cpp -o ./compile/encryption.o

g++ ./compile/main.o ./compile/encryption.o -o ./compile/prog -lcryptopp