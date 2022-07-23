# Comment recupper des information sur les processus ? 

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
> TYPE DE NOTE   : Note permanente
>  RESOURCE        : http://www.man-linux-magique.net/man8/pidof.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Recuper le pid d'un processus precis 
*DESCRIPTION :* 

*FORMAT :*

````
pidof [-s] [-c] [-n] [-x] [-z] [-o omitpid[,omitpid...]]  [-o omitpid[,omitpid...]...]  [-d sep] program [program...]
````

*EXAMPLE :*

````
➜  src git:(master) ✗ pidof chrome 
20213 20199 20173 20106 19747 19362 19343 19317 19099 12844 12080 11556 11495 11435 11379 11362 11350 10989 10824 7772 7203 5662 5614 5601 5275 4729 4430 2291 2235 2223 2220 2191 2189 2188 2090

````