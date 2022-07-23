# C'est quoi une instruction, le language machine et l'assembleur

## METADATA
> [!INFO]
> MOC                    : [[MOC_INFORMATIQUE]]
> LIEN                     : 
 Representaion _de_l'information1

 [[Unix]]
 
 [[C'est quoi la representation de l'information]]

 [[C'est quoi les differente representation de l'information ?]]

 [[C'est quoi une instruction, le language machine et l'assembleur]]

 [[Comment est representer la memoire ?]]

 [[Comment representer un entier ?]]

 [[REPRESENTATION DE L'INFORMATION]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Le language machine 
- Une instruction est une opération unique que le processeur peut exécuter
	-	addition, soustraction, copie, appel, ...
- Le code machine est la représentation au niveau des bits des instructions:
	- Par exemple, en x86 : 0x83 0xEC 0x10 représente "soustraire 0x10 de la valeur du registre %esp".
	- Différentes instructions peuvent nécessiter un nombre différent de bits pour être représentées, c'est difficile à lire pour l'homme
- L'assemblage est une forme de code machine lisible par l'homme
	- Par exemple, sub 0x10, %esp

## C'est quoi une instruction machine
- les instruction sont des operation realiser pas le processeur leur format dependent
du type de puce du fabricant du processeurs et de architecture de la puce.
- les instruction machine pour les puce intel en archicture x86 ne sont pas les meme
que les les puce amd x32.

## Architcture du processeur
 Le CPU exécute une série d'instructions
- Chaque instruction est une opération simple : addition, chargement, stockage, saut, etc.
- Les instructions sont stockées en mémoire
- Le compteur de programme (PC) contient l'adresse mémoire de la prochaine instruction.
- L'unité centrale peut lire ou écrire dans la mémoire par le biais du bus mémoire - Elle peut généralement lire ou écrire un seul octet ou mot à la fois.

## operation du processeur
Fonctionnement de base du processeur :
- 1) Extraire l'instruction de l'adresse mémoire indiquée par le compteur de programme PC - 2) Exécuter l'instruction
- 3) Régler PC à l'adresse de l'instruction suivante
- Où se trouve l'instruction suivante ?
- Pas seulement "PC + 1" chaque instruction peut avoir une taille différente !
- L'instruction "Jump" place également le PC à une nouvelle valeur.

## c'est quoi un registre
 Les registres sont utilisés pour stocker des données "temporaires" sur l'unité centrale elle-même.
- L'accès à un registre est extrêmement rapide : 1 cycle d'horloge (0,4 ns sur un processeur de 2,4 GHz).
- Mais la lecture ou l'écriture de la mémoire peut atteindre ~40 ns (dépend d'un grand nombre de facteurs) - Un "ralentissement" de près de 100x pour accéder à la mémoire !
- Le processeur Intel x86 possède huit registres de 32 bits.
	- Nommés %eax, %ecx, %edx, %ebx, %esi, %edi, %esp, %ebp
- Il existe des conventions sur la façon dont certains registres sont utilisés

## c'est quoi un drapeau de condition ou condition flag
-	Les drapeaux de condition (CF) contiennent des informations sur l'état de la dernière instruction. Chaque drapeau est un bit.
- Souvent utilisés par d'autres instructions pour décider de ce qu'il faut faire.
- Par exemple, le drapeau Overflow est mis à 1 si vous additionnez deux registres et que la valeur dépasse un mot. Le drapeau zéro est mis à 1 si le résultat d'une opération est zéro.

```
subl $0x42, %eax  # Subtract 0x42 from value in %eax
jz   $0x80495BC   # If zero flag set, jump to instruction at 0x80495BC
```

## Comment acceder a la memoire
- L'instruction Move est utiliser pour lire et ecrire ent memoire.

```
 movl $0x00001000, %eax  #Set %eax register to value 0x1000
 movl $0x00001000, %eax  # Set %eax register to value 0x00001000
 movl 0x0000ea5f, %eax   # Set %eax register to contents of memory address 0x0000ea5f
 movl (%eax), %ebx       # Set %eax register to contents of memory address 0x0000ea5f
```

## Rappel de la memoire
Voir la mémoire comme un grand tableau d'octets
- Pile
	- Utilisée pour implémenter les appels de fonction, le stockage local - Chaque fois qu'une fonction est appelée, la pile augmente.
	- A chaque retour de fonction, la pile diminue
- Le tas
	- Stockage alloué dynamiquement pour le programme
	- S'étend et se contracte en fonction des appels à malloc et free.