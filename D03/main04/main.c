/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 11:51:34 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 11:56:44 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 10;
	printf("a: %d et b: %d ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d et b: %d", a, b);
	return (0);
}
