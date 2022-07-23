/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:25:52 by engooh            #+#    #+#             */
/*   Updated: 2022/05/10 11:11:14 by engooh           ###   ########.fr       */
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
	pthread_t	thid[5];

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
		printf("Thread %d return %s\n", i, (char *)status);
		free(status);
	}
}
