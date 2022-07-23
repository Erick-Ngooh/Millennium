# Comment terminer un processus ?

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
>  RESOURCE        : https://man7.org/linux/man-pages/man3/atexit.3.html https://man7.org/linux/man-pages/man3/exit.3.html
> DATE PM             : 07/05/2022
> DATE DM             : 07/05/2022


## Un processus se termine pour l'une des 3 raisons suivantes :
- (1) retour de la procédure main()
- (2) appel à la fonction exit()
- (3) réception d'un signal dont l'action par défaut est de mettre fin au processus.
comme le signal **SIGSTOP ou  SIGTSTP**.
## detruire un process avec exit() et atexit():
*DESCRIPTION :*
- La fonction **atexit** enregistre les fonctions à exécuter lors de la sortie du processus (avant le exit).
- La fonction **exit**  provoque l'arrêt normal du processus status egale aux code d'erreure de sortie de process.

*FORMAT :*

````
 **#include <stdlib.h>**

 **int atexit(void (***_function_**)(void));**
 
 #include <stdlib.h>

 noreturn void exit(int status);

````

*EXAMPLE :*

````
void cleanup(void) 
{ 
	printf("cleaning up\n"); 
} 

void fork6() 
{ 
	atexit(cleanup); 
	fork(); 
	exit(0); 
}

````