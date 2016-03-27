#!/usr/bin/env python3

import sys
import os
import subprocess as sp

try:
	inpfile = os.getcwd() + '/' + sys.argv[1]
	outpfile = os.getcwd() + '/' + sys.argv[1][:15] + '_utf8.c'
except:
    print('usage: utf8_to_big.py <input file>')
    raise SystemExit(0)

if len(sys.argv) != 2:
    print('usage: utf8_to_big.py <input file>')
    raise SystemExit(0)

cmd = 'iconv -t UTF-8 -f BIG5 ' + inpfile + ' -o ' + outpfile
sp.call(cmd.split(' '))