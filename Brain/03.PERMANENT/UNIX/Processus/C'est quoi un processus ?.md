+89# What is a process?

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
>  RESOURCE        : https://www.geeksforgeeks.org/introduction-of-process-management/ https://cs61.seas.harvard.edu/wiki/images/7/7b/Lec21-Processes.pdf
> DATE PM             : 16/04/2022
> DATE DM             : 16/04/2022


## Programme vs Processus
*DESCRIPTION :* 
- Un processus est une instance d'un programme en cours d'exécution. c'est en fait un programme en excution.
- un programme peut creer plusieurs processus.  
- Un processus fournit Un espace d'adressage privé Par le mécanisme de la mémoire virtuelle ! Donnant Illusion d'une utilisation exclusive du processeur
- Un processus a sa propre memoire, sa propre stack heap, compteure de programme, il a sont propre espace d'adressage et ses enfant heriteront de la valeure de ses data, meme pas de leur memoire, lui meme il aurat sont propre espace d'adressage.

## À quoi ressemble un processus en mémoire 
*RESOURCCE :*
![[layout 1.png]]