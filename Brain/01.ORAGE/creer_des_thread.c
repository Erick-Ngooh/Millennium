/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creer_des_thread.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:25:52 by engooh            #+#    #+#             */
/*   Updated: 2022/05/10 10:45:16 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*start_routine(void *ac)
{
	int		i;

	i = 0;
	while (++i < 5)
		printf("this is thread %d value test: %d\n", *((int *)ac), i);
	if (*((int *)ac) % 2 == 0)
		return (strdup("SUCCESS"));
	else
		return (strdup("FAIL"));
}

int	main(void)
{
	int			i;
	void		*status;
	/* status contient un pointeur vers l' argument status passé par le thread de fin dans le cadre de pthread_exit(). 
	Si le thread de fin s'est terminé par un retour, status contient un pointeur vers la valeur de retour. 
	Si le thread a été annulé, le statut peut être défini sur -1.*/
	pthread_t	thid[5];
	/* pthread_t est le type de données (long unsigned int) utilisé pour identifier de manière unique un thread. 
	Il est renvoyé par pthread_create() et utilisé par l'application dans les appels de fonction qui nécessitent un identifiant de thread.*/
	i = -1;
	while (++i < 2)
	{
		if (pthread_create(&thid[i], NULL, start_routine, &i) < 0)
		{
			perror("");
			exit(1);
		}
	}
	i = -1;
	while (++i < 2)
	{
		printf("thread id: %lu\n", thid[i]);
		if (pthread_join(thid[i], &status) < 0)
		{
			perror("");
			exit(3);
		}
		/*Permet au thread appelant d'attendre la fin du thread cible .*/
		printf("Thread %d return %s\n", i, (char *)status);
	}
	free(status);
}
