#!/usr/bin/env python3

import sys
import os
import subprocess as sp

try:
    f = sys.argv[1]
except:
    sys.exit('usage: utf8_to_big.py <input_file>')

if len(sys.argv) != 2:
    sys.exit('usage: utf8_to_big.py <input_file>')
elif '_utf8' not in f:
    sys.exit("'_utf8' is not in file's name! Are you inputing a wrong file?")

inpfile = os.getcwd() + '/' + f
outpfile = os.getcwd() + '/' + f[:f.index('_utf8')] + '.c'

cmd = 'iconv -f UTF-8 -t BIG5 ' + inpfile + ' -o ' + outpfile

sp.call(cmd.split(' '))

print('Converted as ' + os.path.split(outpfile)[-1])
