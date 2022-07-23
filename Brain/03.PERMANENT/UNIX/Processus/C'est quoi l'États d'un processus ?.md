# C'est quoi l'États d'un processus ?

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
>  RESOURCE        : https://www.baeldung.com/linux/process-states https://cs61.seas.harvard.edu/wiki/images/7/7b/Lec21-Processes.pdf
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Tant que un  processus existent, il serat dans l'un des cinq états possibles :
*DESCRIPTION :* 
-   En cours d'exécution ou Exécutable (R)
-   Veille ininterrompue (D)
-   Sommeil Interruptible (S)
-   Arrêté (T)
-   Zombi (Z)
   
- **Prêt**:
Le processus attend d'être exécuté, l'algorithme d'ordonnancement des threads peut forcer un processus en cours d'exécution à renoncer à son droit d'exécution. Cela permet de s'assurer que chaque processus peut avoir une part équitable des ressources CPU. Dans ce cas, le processus sera placé dans une file d'attente d'exécution, et son état est maintenant un état exécutable attendant son tour pour s'exécuter.

-  **État en cours d'exécution ou exécutable (R)**:
Le processus s'exécute sur une unité centrale. Dans l'état d'exécution, le processus utilise un cœur de processeur pour exécuter son code et sa logique.

- **Etat d'attente (ou sommeil ou blocage) (S)**:
Le processus attend qu'un événement se produise, tel que l'achèvement d'une E/S, d'une minuterie, etc.

-  **Etat Stoppé (T)**:
Le processus est suspendu (en raison de la réception d'un signal **SIGSTOP ou  SIGTSTP** et ne sera pas planifié.
Dans cet état, nous pourrions ramener le processus dans un état en cours d'exécution ou exécutable en envoyant le signal _SIGCONT_ .

- **État zombie (Z)**:
Lorsqu'un processus a terminé son exécution ou est terminé, il enverra le signal _SIGCHLD_  au processus parent et passera à l'état zombie. Le processus zombie, également connu sous le nom de processus défunt, restera dans cet état jusqu'à ce que le processus parent le supprime de la table des processus. Pour effacer le processus enfant terminé de la table des processus, le processus parent doit lire la valeur de sortie du processus enfant à l'aide des appels système wait ou pid.

*RESOURCCE :*
![[image1 1.png]]