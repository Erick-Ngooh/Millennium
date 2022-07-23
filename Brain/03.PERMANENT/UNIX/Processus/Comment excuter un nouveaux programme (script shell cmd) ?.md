# Comment excuter un nouveaux programme (script shell | cmd) ? 

> [!INFO]
> MOC                    : [[MOC_INFORMATIQUE]]
> LIEN                     : 
 [[Unix]] 

 [[PROCESSUS SUR UNIX]]

 [[C'est quoi l'etat de sortie d'un processus]]

 [[C'est quoi l'États d'un processus ?]]

 [[C'est quoi la creation de processus ?]]

 [[C'est quoi un processus ?]]

 [[C'est quoi un Systeme Multi-tache ou Multi-processus]]

 [[Comment bien securiser la comunication entre les processus ?]]

 [[Comment creer un nouveaux process ?]]

 [[Comment excuter un nouveaux programme (script shell cmd) ?]]

 [[Comment faire communiquer plusieur processus entre eux ?]]

 [[Comment Obtenir l'état de sortie d'un processus enfant ?]]

 [[Comment obtenir le pid d'un processus ?]]

 [[Comment recupper des information sur les processus ?]]

 [[Comment terminer un processus ?]]

 [[Comment verifier l'etats d'un processes ?]]

 [[PROCESSUS DANS LE SHELL]]

 [[PROCESSUS SUR UNIX]]

 [[PROGRAMATION DE PROCESSUS SUR UNIX]]

 [[THEORIE DES PROCESSUS]]
> TYPE DE NOTE   : Note permanante
>  RESOURCE        : https://man7.org/linux/man-pages/man2/execve.2.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## execve() excute un nouveau programe 
*DESCRIPTION :* 
execve() ne crée pas un nouveau processus !
- Au contraire, il remplace l'espace d'adressage et l'état du CPU du processus actuel
- Charge le nouvel espace d'adressage du fichier exécutable
et le lance depuis main()
- Donc, pour démarrer un nouveau programme, utilisez fork() suivi de
execve()

*FORMAT :*

````
#include <unistd.h>

int execve(const char *pathname, char *const argv [], char *const envp[]) ;
````

*EXAMPLE :*

````
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main(void)
{
    char *cmd[] = {"/usr/bin/ls", "-al", NULL};

    execve(cmd[0], cmd, NULL);
	return (0);
}
````

*OUTPUT :*

````
total 160
drwxrwxr-x  8 lazarus lazarus  4096 Apr 16 13:15 .
drwxr-xr-x 27 lazarus lazarus  4096 Apr 16 13:15 ..
drwxrwxr-x  9 lazarus lazarus  4096 Apr 15 16:16 .git
-rwxrwxr-x  1 lazarus lazarus 16752 Apr 16 13:15 a.out
-rw-rw-r--  1 lazarus lazarus   173 Apr 16 13:15 test.c
````