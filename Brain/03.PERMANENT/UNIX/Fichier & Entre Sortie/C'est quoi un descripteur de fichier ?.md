# C'est quoi un descripteur de fichier ?

## METADATA
> [!INFO]
> MOC                    : [[MOC_INFORMATIQUE]]
> LIEN                     : 
 [[Unix]]
 
 [[FICHIER  & ENTRER SORTIE]] 

 [[C'est quoi L'abstraction de fichier UNIX]]

 [[C'est quoi un descripteur de fichier ?]]

 [[C'est quoi un Système de fichiers virtuel]]

 [[Comment Accès aux métadonnées des fichiers ?]]

 [[Comment ecrire sur un fichier ?]]

 [[Comment faire des operation sur les fichier sur Unix ?]]

 [[Comment faire des redirection en c ?]]

 [[Comment lire dans un fichier ?]]

 [[Comment manipuler des repertoire ?]]

 [[PROGRAMTION DES FICHIERS & ENTRER SORTIE]]

 [[stdin, stdout, stderr]]

 [[THEORIE DES FICHIERS &  ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf https://www.notion.so/LANGUAGE-C-b31898999f8f4c5ba0570ba3ac75240e?p=b4bf12ef137346de97996823138ccfc8
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Un descripteut de fichier et un intier qui identifie un fichier.
- Un descripteur de fichier est un index (entier positif) qui identifie un fichier de manier abstraite, 
- Ou tout autre ressource input/output comme les sockets, les canals ou les périphériques. 
- Sur les système. Posix et plus spécifiquement dans le langage C, c'est un entier de type int.
- si le fd est négatif ou égale a 0 cela indique une erreur ou la fin du fichier.

*RESOURCCE :*

## Le système d'exploitation maintient un fichier struct interne pour chaque fichier ouvert (pour chaque fd).
- une structure de fichier comprend des info sur le fd comme la position du offset actuelle dans le fichier et creer pour chaque fd.
- le offset indique le décalage que la prochaine opération read() ou write() va effecter dnas le fichier (rappelont nous q'un fichier et une suite ordonnee d'octet).
- Ce decalage peut etre modifier avec l'appelle systeme **lseek**

*RESOURCCE :*
![[offset_file 3.png]]

## L'OS maintient un table de fd pour chaque processes
- Plusieur processes peuvent avoir le même fichier ouvert.
- un processes peut ouvrire plusieur fois un meme fichier chaque instance chaque fd du fichier ouvert aurat sa propre position.
- Il peut lire et écrire à différents décalages dans le fichier indépendamment.
- mais ils auront des tables de fd et des entrées de table de fichiers différentes.

*RESOURCCE :*
![[fileinstance 1.png]]