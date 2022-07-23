# C'est quoi un semaphore ? 

## METADATA
> [!INFO]
> MOC                    : [[MOC_INFORMATIQUE]]
> LIEN                     : 
> TYPE DE NOTE   : PERMANENTE
>  REFERENCE       : 
>  RESOURCE        : https://www.youtube.com/watch?v=ukM_zzrIeXs
> DATE PM             : 04/06/2022
> DATE DM             : 04/06/2022


## Un semaphore c'est entier qui change de valeur. 
- un semaphore c'est un entier partager entre plusieure thread ou processus, qui change de valeur, il peut etre soit d'ecrementer, soit incrementer.
- On utilise les semaphore quand t'on veut synchroniser des operations realiser par des threads ou des processus qui agissent et simultaner.
- On dit que les semaphore sont atomique: ca veux dire que plusieur processus ou threads peuvent acceder a leur memoire sans s'interompre.

## Comment fonctione un semaphore 
- un semaphore est entier pour y acceder ou utilise deux methode wait ou post.
- wait increment le semaphore si il est superieure a 0, et attend si il est egale a 0.
- post incremente juste le semaphore.
- c'est operation atomique sa veux dire que les processus et thread les realise en meme temps sur le semaphore, sans s'interompre.
-  on ne peut savoir quel thread ou processus va wait, ou post.

## Type de semaphore 
 **Sémaphore binaire –**   
    - Ceci est également connu sous le nom de serrure mutex. Il ne peut avoir que deux valeurs 0 et 1.
	- Sa valeur est initialisée à 1. Il est utilisé pour implémenter la solution de problèmes de section critiques avec plusieurs processus.
  **Comptage du sémaphore –**   
    - Sa valeur peut s'étendre sur un domaine sans restriction. Il est utilisé pour contrôler l'accès à une ressource qui a plusieurs instances.
	
## Example de wait et post en c 

*EXAMPLE :*

````
s = 1;

int wait_semaphore(int s)
{
    while (s == 0)
    {
    }
    s--;
    return (s);
}

int post_semaphore(int s)
{
    s++;
    return (s);
}
````