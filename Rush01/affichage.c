/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 11:17:31 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/18 14:44:09 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	affichage(char **tab)
{
	int r;
	int i;

	r = 1;
	while (r < 9)
	{
		i = 0;
		while (tab[r][i] != '\0')
		{
			ft_putchar(tab[r][i]);
			if (i != 8)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		r++;
	}
}
