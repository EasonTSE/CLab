#!/usr/bin/env python3

import sys
import os
import subprocess as sp



def main():
    try:
        f = sys.argv[1]
    except:
        sys.exit('usage: big5_to_utf8.py <input_file>')

    if len(sys.argv) != 2:
        sys.exit('usage: big5_to_utf8.py <input_file>')
    elif '_utf8' in f:
        sys.exit("'_utf8' is in file's name! Are you inputing a wrong file?")

    inpfile = os.getcwd() + '/' + f
    outpfile = os.getcwd() + '/' + f[:f.index('.c')] + '_utf8.c'

    cmd = 'iconv -f BIG5 -t UTF-8 ' + inpfile + ' -o ' + outpfile

    sp.call(cmd.split(' '))

    print('Converted as ' + os.path.split(outpfile)[-1])

if __name__ == '__main__':
    main()
