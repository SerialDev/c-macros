#! /bin/bash

# meson build-clang

cd build-clang

CC=clang CXX=clang++ meson ..

ninja


