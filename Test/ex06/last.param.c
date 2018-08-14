/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:07:30 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/23 15:11:15 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc[];
	if (argc[i] = 0)
		ft_putchar('\n');
	else
		ft_putchar(argc, argv);
	return (0);
}
