# Comment lire sur fichier ?

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


## read lit sur un file descriptor
- return le nombre de d'octet lut et -1 en cas d'erreur.
*FORMAT :*

````
 #include <unistd.h>

  ssize_t read(int _fd_, void _buf_, size_t _count_);
````

*EXAMPLE :*

````
har *get_next_line(int fd)
{
    int     ret;
    char    *line;
    char    buf[2];

    ret = 1;
    line = NULL;
    buf[0] = '\0';
    buf[1] = '\0';
    while (ret && *buf != '\n')
    {
        ret = read(fd, buf, 1);
        if (ret < 0)
        {
            free(line);
            return (NULL);
        }
        if (buf[0])
            line = ft_strjoin_update(line, buf);
    }
    return (line);
}

int main(void)
{
	int fd;

	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line);
}
````

*OUTPUT :*

````
-$ cat file 
hello la terre
-$ gcc read.c && ./a.out
hello la terre
````

## Dans quelles conditions la lecture pourrait-elle renvoyer moins d'octets que le nombre demandé ?
- 1) Lecture jusqu'à la fin d'un fichier
- Si le fichier fait 100 octets, et que vous essayez de lire 512 octets, vous n'obtiendrez que 100...
- 2) Lecture à partir d'un flux
- Sous UNIX, les flux d'octets sont toujours traités comme des "fichiers".
- Exemples : socket réseau, périphérique série, pipe
- read() retourne le nombre d'octets actuellement disponibles sur le flux.

server ==> internet ==> port ethernet ==> VFS ==> read socket file ==> aplication.

## Lire dans un fichier de manier securiser et robuste:
```
ssize_t rio_readn(int fh, char *buf, size_t num) ;
````
- Même interface que read(), mais avec un comportement différent.
- Lit toujours num octets, sauf erreur (-1) ou fin de fichier.
- Lorsqu'elle lit à partir d'un flux, elle ne revient pas avant d'avoir lu le nombre d'octets (ou EOF).