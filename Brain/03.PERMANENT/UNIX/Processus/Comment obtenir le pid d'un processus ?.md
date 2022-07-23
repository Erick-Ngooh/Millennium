# Comment obtenir le pid d'un processus ?

## METADATA
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
>  RESOURCE        : https://man7.org/linux/man-pages/man2/getpid.2.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## obtenir le pid d'un processus actuel
*DESCRIPTION :* 
**getpid** () renvoie l'ID de processus (PID) du processus appelant. (Ceci est souvent utilisé par les routines qui génèrent des noms de fichiers.)
     
*FORMAT :*

````
 #include <unistd.h>
       
pid_t getpid(void);
````

## obtenir le pid d'un processus parent
*DESCRIPTION :* 
**getppid** () renvoie l'ID de processus du parent de l'appelant
processus. Ce sera soit l'ID du processus qui a créé
ce processus en utilisant **fork** (), ou, si ce processus a déjà
terminé, l'ID du processus auquel ce processus a été
reparenté (soit [init(1)](https://man7.org/linux/man-pages/man1/init.1.html) soit un processus "subreaper" défini via
l' opération [prctl(2) ](https://man7.org/linux/man-pages/man2/prctl.2.html) **PR_SET_CHILD_SUBREAPER** ).
*FORMAT :*

````
 #include <unistd.h>
       
pid_t getpid(void);

````