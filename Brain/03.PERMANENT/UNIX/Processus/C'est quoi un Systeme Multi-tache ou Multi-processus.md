# Systeme Multi-tache ou Multi-processus

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
>  REFERENCE       : 
>  RESOURCE        : https://cs61.seas.harvard.edu/wiki/images/7/7b/Lec21-Processes.pdf https://www.geeksforgeeks.org/process-schedulers-in-operating-system/ 
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Contexte du processus

*DESCRIPTION :* 

Le contexte du processus sont les choses dont le système d'exploitation
a besoin pour exécuter un processus

1) Espace d'adressage
La mémoire à laquelle le processus peut accéder
Constitué de divers éléments : le code du programme, les variables globales/statiques, le tas,
la pile, etc.

2) État du processeur
Les registres du CPU associés au processus en cours d'exécution
Comprend les registres d'usage général, le compteur de programme, le pointeur de pile, etc.

3) Ressources du système d'exploitation
Divers états du système d'exploitation associés au processus
Exemples : table des pages, table des fichiers, sockets réseau, fd etc.

## Changements de contexte
Plusieurs processus peuvent fonctionner simultanément.
Sur un système à une seule unité centrale, un seul processus est exécuté sur l'unité centrale à la fois.

Mais on peut avoir une exécution simultanée des processus, sur un système multi-CPU (ou multi-core), plusieurs processus peuvent s'exécuter en parallèle.

Le système d'exploitation partagera le temps d'exécution de chaque CPU/cœur, en commutant rapidement les processus entre eux.

Le passage d'un processeur de l'exécution d'un processus à un autre est appelé un
commutation de contexte.
- (1) Sauvegarder le contexte du processus en cours d'exécution,
- (2) Restaurer le contexte d'un processus précédemment préempté.
- (3) Reprendre l'exécution du processus nouvellement restauré.

Décider quand préempter le processus en cours et relancer le processus préempté
préempté est connu sous le nom d'ordonnancement. 
L'ordonnancement est effectué par une partie du système d'exploitation appelée planificateur.

![[commutation-de-processeur-context-switching-l 1 1.jpg]]
