# Comment bien securiser la comunication entre les processus ?

[[C'est quoi les differente representation de l'information ?]]

[[C'est quoi une instruction, le language machine et l'assembleur]]

[[Comment est representer la memoire ?]]

[[Comment representer un entier ?]]

[[REPRESENTATION DE L'INFORMATION]]

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
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf 
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Comment bien securiser la comunication entre les processus ?
- Pour securiser la communication entre les processus:
- close tout les fd herite ou ouvert dans le precessus courant, les leak de fd provoque la creation de processus zombie et peut rendre la communication entre deux processus instable.
- Commet le processus a encore des ressource allouer ici des fd, le processus est achever mais son pid rester dans dans la table de processus il est donc a l'etat de zombie.

*EXAMPLE :*
### se refairer au projet pipex.
https://github.com/LazarusOsmane/Pipex
