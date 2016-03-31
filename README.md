## diff-bin

Is a tool that lets you get the difference of two binary files,diff-bin automates the use of diff and xxd.If you do not have them installed , you must install them, but will not work.

Use:

    diff-bin fileA fileB

  -or-

    diff-bin fileA fileB > file.diff

To compile use :

    gcc -o diff-bin diff-bin.c


This is not the difference in the files :

        0000010: 0200 3e00 0100 0000 8007   ..>.......@	     0000010: 0200 3e00 0100 0000 8007  ..>.......@

This is the difference in the files ( | ) :

        00000d0: a40e 0000 0000 0000 a40e  ........... |	00000d0: d40e 0000 0000 0000 d40e  ...........

Author : Cristian Velez Ruiz (ainokila)
