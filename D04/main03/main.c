/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 22:52:01 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/12 14:35:54 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(int argc, char *argv[])
{
	int test;

	if (argc >= 3)
		if (argv[1] && argv[2])
		{
			test = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
			printf("%d \n", test);
		}
	return (0);
}
