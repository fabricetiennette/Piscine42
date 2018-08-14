/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 13:45:36 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/16 13:57:49 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

		temp = *a;
		*a = *b;
		*b = temp;
}

int		main()
{
	int a;
	int b;

	a = 10;
	b = 42;
	printf("a= %d et b= %d \n", a, b);
	ft_swap(&a, &b);
	printf("a= %d et b= %d", a, b);
	return (0);
}
