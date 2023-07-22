#!/bin/bash

echo "Building program..."
clang++ sum.cpp -o sum.exe

echo "Running program..."
./sum.exe

echo "Removing program..."
rm sum.exe


