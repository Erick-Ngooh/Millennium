# Comment creer un threads ?

## METADATA
> [!INFO]
> MOC                    : [[MOC_INFORMATIQUE]]
> LIEN                     : [[PROGRAMATION DES THREADS]]  [[Unix]] 
> TYPE DE NOTE   : Note permanante 
>  RESOURCE        :  https://cs61.seas.harvard.edu/wiki/images/0/0b/Lec22-Files.pdf
> DATE PM             : 18/04/2022
> DATE DM             : 18/04/2022


## Comment creer un threads ?
*FORMAT :*

````
int pthread_create(pthread_t *tid, pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);

• tid: Returns thread ID of newly created thread  
• attr: Set of attributes for the new thread (Scheduling policy, etc.)  
• start_routine: Function pointer to “main function” for new thread

````

## Comment identifier un threads

*FORMAT :*

````
pthread_t pthread_self(void); • Returns thread ID of current thread

• Thread IDs (values of type pthread_t) are unique within a process
````

## Comment terminer un threads
- Les threads se terminent implicitement lorsque la routine du thread de niveau supérieur se termine.
- c'est-à-dire la routine principale du thread principal, ou la routine de démarrage de plusieur threads se terminer.

- pour terminer explicitement un threads is faut utiliser:

*FORMAT :*

````
void pthread_exit(void *retval);

- Si le thread actuel est le thread principal, il attendra que tous les autres threads se terminent, et quittera le processus avec la valeur de retour retval.
- Termine explicitement le thread actuel, avec la valeur de retour de retval.

 int pthread_cancel(pthread_t tid); 

- Termine le thread tid
- Si la fonction de sortie est appelée, le processus se termine ainsi que tous les threads du processus.


````

## Comment rassemble des threads ?
*FORMAT :*

- Attend que le thread tid se termine, place la valeur de retour du thread dans l'emplacement indiqué par thread_return.
- Récupère toutes les ressources mémoire détenues par le thread terminé - Ne peut attendre qu'un thread spécifique.

*FORMAT*

````
int pthread_join(pthread_t tid, void **thread_return) ;
````

## comment detacher un threads ? 

- les thread sont soit joignables, soit détachés.
- Un thread joignable peut être tué et récupéré par d'autres threads.
- Les ressources mémoire ne sont pas récupérées tant qu'elles n'ont pas été récupérées par un autre thread.
- Un thread détaché ne peut pas être tué ou récupéré par un autre thread.
- Les ressources mémoire sont récupérées lorsque le thread détaché se termine - Par défaut, les threads sont joignables.
-int pthread_detach(pthread_t tid) ; - Détache le thread tid tid
- Pourquoi avoir des threads détachés ?

*FORMAT*

````
int pthread_detach(pthread_t tid); #Détache le thread tid tid

````