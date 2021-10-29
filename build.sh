#!/bin/bash
g++ main.cpp -s -fvisibility=hidden -O3 -funroll-loops -fno-asynchronous-unwind-tables -o program
strip program