/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 10:26:18 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 10:39:07 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 51;
	printf("a: %d et b: %d ", a, b);
	ft_swap(&a, &b);
	printf("a: %d et b: %d", a, b);
	return (0);
}
