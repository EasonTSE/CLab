import sys
import os.path as p
import subprocess as sp

inpfile = sys.argv[1]
outpfile = sys.argv[2]

#inpfile = 'HW2_B10409020_1_utf8.c'
#outpfile = 'HW2_B10409020_12.c'

if len(sys.argv) != 3:
    print('usage: utf8_to_big.py <input file> <output file>')
    raise SystemExit(0)

cmd = 'iconv -f UTF-8 -t BIG5 ' + inpfile + ' -o ' + outpfile
sp.call(cmd.split(' '))
