# C'est quoi un thread ?

## METADATA
> [!INFO]
> MOC                    : [[MOC_INFORMATIQUE]] 
> LIEN                     : [[THREADS ET MULTI-THREADINGS]] [[Unix]] [[THREADS ET MULTI-THREADINGS]] [[THEORIE DES THREADS]] [[Comment creer un threads ?]] [[PROGRAMATION DES THREADS]]
> TYPE DE NOTE   :
>  REFERENCE       : 
>  RESOURCE        :
> DATE PM             : JJ/MM/YYYY
> DATE DM             : JJ/MM/YYYY


## C'est quoi un thread ?
- Un thread est un flux de controle qui s'excute dans le contexte d'un processus.
- Chaque processus possede par defaut un thread principal, mais peut en posseder plusieur.
- un thread peut creer un thread appeller peer threads. 
- un thread possed sa propre stack, sont propre pointeur de pile, sont propre compteur de programme et ses propre registre. 
- Touta les threads d'un processus partage le meme espace d'adressage. 
- puisque que les thread partage le meme espace memoire travailler avec des thread 
et plus rapide que travailler avec plusieur process car leur commutation se fait plus rapidement.

![[Capture d’écran 2022-06-03 à 23.44.51.png]]

## Identification des threads
Le système d'exploitation maintient deux structures de données internes : 
- Bloc de contrôle des threads (TCB)  Un pour chaque thread.
- Bloc de contrôle de processus (PCB)  Un pour chaque processus.
- Chaque TCB pointe vers son PCB "conteneur".

Les TCB sont plus petits et moins chers que les processus:
-Le TCB Linux (thread_struct) possède 24 champs.
-Le PCB linux (task_struct) a 106 champs.
