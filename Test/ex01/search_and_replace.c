/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 11:56:49 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/15 13:25:25 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_replace(char *d, char a, char b)
{
	int i;

	i = 0;
	while (d[i] != '\0')
	{
		if (d[i] == a)
			ft_putchar(b);
		else
			ft_putchar(d[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[3][1] != '\0' || argv[2][1] != '\0'))
			ft_replace(argv[1], argv[2][0], argv[3][0]);
		{
			ft_putchar('\n');
		}
		return (0);
	}
}
