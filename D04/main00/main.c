/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 19:41:28 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/12 14:08:00 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int test;

	test = ft_iterative_factorial(12);
	printf("%d \n", test);
	return (0);
}
