/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 12:17:40 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 21:39:21 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char *str;

	str = "fabrice";
	ft_putstr(str);
}
