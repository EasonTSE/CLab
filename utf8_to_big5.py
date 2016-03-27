#!/usr/bin/env python3

import sys
import os
import subprocess as sp

inpfile = os.getcwd() + '/' + sys.argv[1]
outpfile = os.getcwd() + '/' + sys.argv[1][:15] + '.c'


if len(sys.argv) != 2:
    print('usage: utf8_to_big.py <input file>')
    raise SystemExit(0)

cmd = 'iconv -f UTF-8 -t BIG5 ' + inpfile + ' -o ' + outpfile
sp.call(cmd.split(' '))

