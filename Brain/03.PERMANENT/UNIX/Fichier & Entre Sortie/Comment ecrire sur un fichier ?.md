# Comment ecrire sur un fichier ? 

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
> DATE PM             : 19/04/2022
> DATE DM             : 19/04/2022


## la function **write** permet d'ecrire sur un fichier 
- write ecrit des donner sur file descriptor.
- return le nombre d'octet ecrit sur le fd, -1 en cas d'erreur;

*FORMAT :*

````
  #include <unistd.h>

 ssize_t write(int _fd_, const void _buf_, size_t _count_);
````

*EXAMPLE :*

````
#include <unistd.h>

int main(void)
{
	write(1, "hello\n", 6);
	return (0);
}
````

*OUTPUT :*

````
-$ gcc write.c && ./a.out
hello
````


## comment ecrire de maniere plus robuste et securiser 
````
- ssize_t rio_writen(int fh, char *buf, size_t num) ;
````
- Ecrit toujours num octets.
- Retourne num, ou -1 si erreur