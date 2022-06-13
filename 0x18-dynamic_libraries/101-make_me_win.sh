#!/bin/bash
wget -P /tmp/ -q https://raw.github.com/dimru/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD =/tmp/nrandom.so
