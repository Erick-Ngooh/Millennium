# Comment representer un entier ?

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
> DATE PM             : 07/05/2022 
> DATE DM             : 07/05/2022


## les entier non signed
- En c un entier non signer donc un entier strictement positif est stocker sur une plage de 4 bit.
- les valeurs suporte par un entier de 4 bits sont egale a  (2**n) - 1 ou (2**4) - 1. un entier coder sur 4 bit prend en charge des nombre de 0 a 15.
- par example: 0xf = 1111 = 15 
## les entier signer 
- En c les entier signer sont represente sur 4 bits egalement mais de manier differente. 
- le 1er bit equivaut au signe si est egale a 1 le nombre est negatif. 
- les 3 autre bit sont equivaut au nombre. 
- Le nombre est gerer comme un entier non signer si il est positif. 
- les entier signer sont equivaut a -(2**n - 1) - 1 a (2**n - 1) - 1 = -(2**4 - 1) - 1 a  (2**4 - 1) - 1 soit -7 a 7.
- par example 0xf = 1111 = 7
*resource*
![[signe_int.png]]
## overflow d'entier ou d'epassement d'entier
- un overflow d'entier se produit quand un nombre ne peut pas etres stocker dans une plage de bits specifique, par exemple:
- Avec entier non signer est coder sur 4 bit:
- 0xf + 0x1 = 1111 + 0001 = 10000, le resulta et coder sur 5 bits et depasse de un bits
la plage d'un intier qui est de 4 bit c'est un overflow.
*RESOURCCE :*
![[overflow.pnj.png]]
## Concept 
*FORMAT :*

````

````

*EXAMPLE :*

````

````

*OUTPUT :*

````

````

*RESOURCCE :*
## Concept 
*FORMAT :*

````

````

*EXAMPLE :*

````

````

*OUTPUT :*

````

````

*RESOURCCE :*