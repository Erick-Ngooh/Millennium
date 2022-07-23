# COMMENT MANIPULER DES REPERTOIRE ?

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
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf https://man7.org/linux/man-pages/man3/opendir.3.html
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


##  Les répertoires sont des fichiers, maisont un format spécial compris par le système d'exploitation.
- Il ne faut pas essayer de modifier directement
directement un répertoire 
- en fait, le OS ne vous laissera pas ouvrir un
pour écrire ! (open() syscall renvoie une erreur).
- Utilisez plutôt les appels opendir() et
readdir()
- La structure **dirent** contient des informations
sur chaque entrée du répertoire

## Modifier les répertoires
- Si nous n'avons pas le droit d'écrire dans un répertoire, comment peut-on
effectuer des changements dans un répertoire ?
- Réponse : Vous ne le faites pas ! (Du moins pas directement.)
- Au contraire, le système d'exploitation modifie les entrées du répertoire lorsque vous...
- Créez un fichier (en utilisant les appels système open() ou creat())
- Supprimez un fichier (en utilisant l'appel système unlink())
- Créez un lien symbolique (en utilisant l'appel système symlink())
- Renommer des fichiers (en utilisant l'appel système link())
- créer ou supprimer un répertoire (à l'aide des appels système mkdir() et rmdir()).
- Tout ceci est nécessaire pour s'assurer que les répertoires ont le bon format
format, et contiennent toujours les informations correctes.

## OVRIRE UN FICHIER
*FORMAT :*

````
#include <sys/types.h>
#include <dirent.h>

DIR *opendir(const char *_name_);
DIR *fdopendir(int _fd_);
````

*EXAMPLE :*

````
````

*OUTPUT :*

````

````