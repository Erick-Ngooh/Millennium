# Comment est representer la memoire ?

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
> TYPE DE NOTE   :
>  REFERENCE       : 
>  RESOURCE        :
> DATE PM             : JJ/MM/YYYY
> DATE DM             : JJ/MM/YYYY


## La memoire est un grand tableau d'octet.
- La mémoire est un grand tableau d'octets 
- L'adresse de l'emplacement est un entier qui correspond a un index du tableau
- Lorsque nous avons des données de plus d'un octet, dans quel ordre devons-nous stocker les octets ?
- Big-endian : les octets les plus significatifs en premier dans la mémoire.
- Little-endian : les octets les moins significatifs en premier dans la mémoire.
- La plupart des machines compatibles avec Intel sont en mode little-endian.

![[Capture d’écran 2022-05-31 à 08.11.47.png | 250]]

- Considérons un entier de 32 bits (4 octets) 0xFF5FE26D 
- Supposons qu'il soit stocké à l'adresse mémoire 0x100 c.-à-d. qu'il occupe les emplacements 0x100, 0x101, 0x102, 0x103 
- Big endian : les bits les plus significatifs d'abord 0x100 0x101 0x102 0x103
![[Capture d’écran 2022-05-31 à 08.18.43.png]]
- Little endian : les bits les moins significatifs en premier
![[Capture d’écran 2022-05-31 à 08.18.56.png]]
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