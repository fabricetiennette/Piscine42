/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 10:50:29 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 11:16:36 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 10;
	printf("a: %d et b: %d ", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d et mod: %d", div, mod);
	return (0);
}
