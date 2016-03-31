## diff-bin

Is a tool that lets you get the difference of two binary files,diff-bin automates the use of diff and xxd.If you do not have them installed , you must install them, but will not work.

Use:

    diff-bin fileA fileB

  -or-

    diff-bin fileA fileB > file.diff

To compile use :

    gcc -o diff-bin diff-bin.c

..............................FILE A .................................................FILE B..............................
0000000: 7f45 4c46 0201 0100 0000 0000 0000 0000  .ELF.......	0000000: 7f45 4c46 0201 0100 0000 0000 0000 0000  .ELF.......
0000010: 0200 3e00 0100 0000 8007 4000 0000 0000  ..>.......@	0000010: 0200 3e00 0100 0000 8007 4000 0000 0000  ..>.......@
0000020: 4000 0000 0000 0000 f021 0000 0000 0000  @........!.	0000020: 4000 0000 0000 0000 f021 0000 0000 0000  @........!.
0000030: 0000 0000 4000 3800 0900 4000 1e00 1b00  ....@.8...@	0000030: 0000 0000 4000 3800 0900 4000 1e00 1b00  ....@.8...@
0000040: 0600 0000 0500 0000 4000 0000 0000 0000  ........@..	0000040: 0600 0000 0500 0000 4000 0000 0000 0000  ........@..
0000050: 4000 4000 0000 0000 4000 4000 0000 0000  @.@.....@.@	0000050: 4000 4000 0000 0000 4000 4000 0000 0000  @.@.....@.@
0000060: f801 0000 0000 0000 f801 0000 0000 0000  ...........	0000060: f801 0000 0000 0000 f801 0000 0000 0000  ...........
0000070: 0800 0000 0000 0000 0300 0000 0400 0000  ...........	0000070: 0800 0000 0000 0000 0300 0000 0400 0000  ...........
0000080: 3802 0000 0000 0000 3802 4000 0000 0000  8.......8.@	0000080: 3802 0000 0000 0000 3802 4000 0000 0000  8.......8.@
0000090: 3802 4000 0000 0000 1c00 0000 0000 0000  8.@........	0000090: 3802 4000 0000 0000 1c00 0000 0000 0000  8.@........
00000a0: 1c00 0000 0000 0000 0100 0000 0000 0000  ...........	00000a0: 1c00 0000 0000 0000 0100 0000 0000 0000  ...........
00000b0: 0100 0000 0500 0000 0000 0000 0000 0000  ...........	00000b0: 0100 0000 0500 0000 0000 0000 0000 0000  ...........
00000c0: 0000 4000 0000 0000 0000 4000 0000 0000  ..@.......@	00000c0: 0000 4000 0000 0000 0000 4000 0000 0000  ..@.......@
00000d0: a40e 0000 0000 0000 a40e 0000 0000 0000  ........... |	00000d0: d40e 0000 0000 0000 d40e 0000 0000 0000  ...........
00000e0: 0000 2000 0000 0000 0100 0000 0600 0000  .. ........	00000e0: 0000 2000 0000 0000 0100 0000 0600 0000  .. ........
00000f0: 101e 0000 0000 0000 101e 6000 0000 0000  ..........`	00000f0: 101e 0000 0000 0000 101e 6000 0000 0000  ...........
.
.
.

This is the difference in the files ( | ) :

00000d0: a40e 0000 0000 0000 a40e 0000 0000 0000  ........... |	00000d0: d40e 0000 0000 0000 d40e 0000 0000 0000  ...........

Author : Cristian Velez Ruiz (ainokila)
