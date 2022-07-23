# C'est quoi L'abstraction de fichier UNIX

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

 [[FICHIER  & ENTRER SORTIE]]

 [[PROGRAMTION DES FICHIERS & ENTRER SORTIE]]

 [[stdin, stdout, stderr]]

 [[THEORIE DES FICHIERS &  ENTRER SORTIE]]
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Sous Unix **tout est fichier**
- Sous UNIX, le fichier est l'abstraction de base utilisée pour les E/S.
- Utilisé pour accéder aux disques, CDs, DVDs, périphériques USB et série, aux sockets réseau, et même à la mémoire !
 - Un fichier apparaît à l'application comme **une séquence ordonnée d'octets.**
 - les fichier n'ont **Aucune structure interne** il n'y a donc pas bessions d'extention sur UNIX. 
 
*RESOURCCE :*
![[fileABS 1.png]]

