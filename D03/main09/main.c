/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 09:02:29 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 19:12:57 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int	i;
	int	tab[SIZE];

	i = 0;
	while (i < SIZE)
	{
		srand(rand());
		tab[i] = (rand() % 42) + 1;
		printf("%d,", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_integer_table(tab, SIZE);
	i = 0;
	while (i < SIZE)
		printf("%d,", tab[i++]);
	printf("\n");
}
