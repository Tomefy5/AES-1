#!/bin/bash

g++ -c ./main.cpp -o ./compile/main.o 
g++ -c ./fonctions/encryption.cpp -o ./compile/encryption.o
g++ -c ./fonctions/decryption.cpp -o ./compile/decryption.o

g++ ./compile/main.o ./compile/encryption.o ./compile/decryption.o -o ./compile/prog -lcryptopp