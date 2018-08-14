/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 22:29:51 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/12 14:24:07 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_iterative_power(int nb, int power);

int		main(int argc, char *argv[])
{
	int test;

	if (argc >= 3)
		if (argv[1] && argv[2])
		{
			test = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
			printf("%d \n", test);
		}
	return (0);
}
