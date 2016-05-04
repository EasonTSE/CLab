#!/usr/bin/env python3

import os
import subprocess as sp
import sys


def main():
    try:
        f = os.getcwd()
    except:
        sys.exit('usage: big5_to_utf8.py <input_file>')

    if len(sys.argv) != 1:
        sys.exit('usage: big5_to_utf8.py <input_file>')

    dot_c_list = [i for i in os.listdir() if '.c' in i]

    fnum = len(dot_c_list)
    counter = 0

    for i in sorted(dot_c_list):
        if '_utf8' in i:
            print("Skipped! '_utf8' is in", i, "!")
        elif (i[:i.index('.c')] + '_utf8.c') in dot_c_list:
            print('Skipped!', i[:i.index('.c')] + '_utf8.c',
                  'is already converted!')
        else:
            inpfile = os.getcwd() + '/' + i
            outpfile = os.getcwd() + '/' + i[:i.index('.c')] + '_utf8.c'
            iconv(inpfile, outpfile)
            print(os.path.split(inpfile)[-1] + '\t-->\t' + os.path.split(
                outpfile)[-1])
            counter += 1

    print(fnum, '".c" file(s) in directory,', counter, 'file(s) converted!')


def iconv(inf, outf):
    cmd = 'iconv -f BIG5 -t UTF-8 ' + inf + ' -o ' + outf
    sp.call(cmd.split(' '))


if __name__ == '__main__':
    main()
