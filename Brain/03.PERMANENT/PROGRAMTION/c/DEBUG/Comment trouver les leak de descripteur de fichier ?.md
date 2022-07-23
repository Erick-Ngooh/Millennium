# Comment trouver les leak de descripteur de fichier ?

## METADATA
> [!INFO]
> MOC                    : [[DEBUG]] 
> LIEN                     :  [[Valgrind]] [[DEBUG]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        : https://valgrind.org/docs/manual/manual-core.html
> DATE PM             : 17/04/2022
> DATE DM             : 17/04/2022


## --track-fds=<yes|no|all> [default: no]
*DESCRIPTION :* 
Lorsqu'il est activé, Valgrind imprimera une liste des descripteurs de fichiers ouverts à la sortie ou sur demande, via la commande gdbserver monitor `v.info open_fds`
*FORMAT :*

````
valgrind --track-fds=yes ./prog
````

*EXAMPLE :*

````
-$ valgrind --track-fds=yes ./pipex

````

*OUTPUT :*

````
=28838== Memcheck, a memory error detector
==28838== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28838== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==28838== Command: ./pipex here_doc END cat /dev/fd/1
==28838== 
==28839== 
==28839== FILE DESCRIPTORS: 4 open at exit.
==28839== Open file descriptor 4:
==28839==    at 0x496B95B: pipe (syscall-template.S:78)
==28839==    by 0x109966: set_here_doc (utils.c:43)
==28839==    by 0x109829: main (main.c:111)
==28839== 
==28839== Open file descriptor 2: /dev/pts/0
==28839==    <inherited from parent>
==28839== 
==28839== Open file descriptor 1: /dev/pts/0
==28839==    <inherited from parent>
==28839== 
==28839== Open file descriptor 0: /dev/pts/0
==28839==    <inherited from parent>
==28839== 
==28839== 
==28839== HEAP SUMMARY:
==28839==     in use at exit: 0 bytes in 0 blocks
==28839==   total heap usage: 13 allocs, 13 frees, 51 bytes allocated
==28839== 
==28839== All heap blocks were freed -- no leaks are possible
==28839== 
==28839== For lists of detected and suppressed errors, rerun with: -s
==28839== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
````