# Comment verifier et lister l'etats d'un processes ? 

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
>  RESOURCE        : https://man7.org/linux/man-pages/man1/ps.1.html
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## ps verfier l'etat des porcessus
*DESCRIPTION :* 
-   **a** – Processus de tous les utilisateurs
-   **U** – Afficher le format orienté utilisateur (affiche des informations supplémentaires sur les processus en cours d’exécution)
-   **X** – Liste des processus qui n’appartiennent à aucune [TTY]
-   **-e** – Affiche les processus en cours d’exécution de tous les utilisateurs
-   **-f** – Affiche la liste complète du format (affiche des informations supplémentaires sur les processus d’exécution)
-
*EXAMPLE :*

````
➜  src git:(master) ✗ ps -aux 
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root           1  0.0  0.1 167692 11488 ?        Ss   08:53   0:02 /sbin/init splash
root           2  0.0  0.0      0     0 ?        S    08:53   0:00 [kthreadd]
root           3  0.0  0.0      0     0 ?        I<   08:53   0:00 [rcu_gp]
root           4  0.0  0.0      0     0 ?        I<   08:53   0:00 [rcu_par_gp]
root           9  0.0  0.0      0     0 ?        I<   08:53   0:00 [mm_percpu_wq]
root          10  0.0  0.0      0     0 ?        S    08:53   0:00 [rcu_tasks_rude_]

````