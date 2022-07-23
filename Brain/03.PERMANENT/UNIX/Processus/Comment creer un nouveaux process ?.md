# Comment creer un nouveaux processus ?

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
>  RESOURCE        : https://cs61.seas.harvard.edu/wiki/images/7/7b/Lec21-Processes.pdf https://man7.org/linux/man-pages/man2/fork.2.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Fork() creer un nouveaux processus
*DESCRIPTION :* 
crée un nouveau processus (processus enfant) qui est une copie identique du processus processus parent
- renvoie 0 au processus enfant
- renvoie l'ID du processus enfant (pid) au processus parent.
- Fork est intéressant (et souvent déroutant) car il est appelé une fois mais renvoie deux fois.
- Tout les processus creer s'excute en meme temps if faut faire des condition avec le retour de fork() pour gerer l'odre d'excution des processus.

*FORMAT :*

````
#include <unistd.h>

pid_t fork(void);  
````

*EXAMPLE 2 :*

````
#include <stdlib.h>
#include <unistd.h>

//Le parent et l'enfant peuvent continuer à bifurquer

void fork2() 
{ 
	printf("L0\n"); 
	fork(); 
	printf("L1\n"); 
	fork(); 
	printf("Bye\n"); 
}

int main(void)
{
	return (0);
}

````

*OUTPUT :*

````
L0
L1
L1
Bye
Bye
Bye
Bye

````

*EXAMPLE 3 :*

````
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//Le parent et l'enfant peuvent continuer à bifurquer

void fork3()
{
 printf("L0\n");
 fork();
 printf("L1\n");
 fork();
 printf("L2\n");
 fork();
 printf("Bye\n");
}

int main(void)
{
    fork3();
	return (0);
}                                                                              
````

*OUTPUT :*

````
L0
L1
L1
L2
L2
Bye
L2
Bye
Bye
Bye
Bye
L2                                                                               
````

*EXAMPLE 4 :*

````
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//Le parent et l'enfant peuvent continuer à bifurquer

void fork4()
{
 printf("L0\n");
 if (fork() != 0) 
 {
     printf("L1\n");
     if (fork() != 0) 
     {
         printf("L2\n");
         fork();
     }
 }
 printf("Bye\n");
}

int main(void)
{
    fork4();
	return (0);
}
                                                                            
````

*OUTPUT :*

````
L0
L1
Bye
L2
Bye
Bye
Bye
                                                                             
````
