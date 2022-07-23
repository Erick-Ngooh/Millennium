/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semaphore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:21:13 by engooh            #+#    #+#             */
/*   Updated: 2022/06/06 15:32:04 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

int	semaphore = 1;

int	wait_semaphore(int s)
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

void    *routine(void *arg)
{
    int *test_value;

    test_value = (int *)arg;
    wait_semaphore(semaphore);
    printf("thread test value ==  %d\n", *test_value);
    post_semaphore(semaphore);
    return (NULL);
}
int main(void)
{
	int i;
	pthread_t thid[10];

	i = -1;
	while (++i < 10)
	{
		if (pthread_create(&thid[i], NULL, &routine, &i) < 0)
			return (0);
	}
	return (0);
}
