/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 22:16:39 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/13 13:00:32 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int test;

	test = ft_recursive_factorial(-1);
	printf("%d \n", test);
	return (0);
}
