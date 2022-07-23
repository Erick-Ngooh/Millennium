# C'est quoi la creation de processus ? 

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
>  RESOURCE        : http://manpagesfr.free.fr/man/man5/inittab.5.html http://manpagesfr.free.fr/man/man8/init.8.html https://cs61.seas.harvard.edu/wiki/images/7/7b/Lec21-Processes.pdf 
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Un processus et creer quand un user excute un nouveaux programme, ou lorsque que l'appelle system fork() est appeller.
*DESCRIPTION :* 
Un processus et creer quand un user excute un nouveaux programme, ou lorsque que l'appelle system fork() est appeller.
Sur unix touts les processus ont un processus parents, C'est ce qu'on appelle la bifurcation. Par exemple le proccessus de cat a comment parent bash ou zsh.

**init** est le père de tous les processus. Ce démon surveille et s'occupe du démarrage et de l'arrêt ordonnés des autres services. Son rôle premier est de créer les processus à partir d'un script enregistré dans le fichier _/etc/inittab_ sont pid est 1.

*RESOURCCE :*