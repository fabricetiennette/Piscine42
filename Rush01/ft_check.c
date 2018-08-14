/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 14:49:09 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/18 16:36:19 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(char **tab, char nb, int x)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[x][i] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_column(char **tab, char nb, int y)
{
	int i;

	i = 1;
	while (i < 9)
	{
		if (tab[i][y] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_block(char **tab, int x, int y, char nb)
{
	x = (x/3)*3;
	y = (
	while (x < 3)
	{
		for (y < 9)
		{
			if (tab[x + i][y + j] == nb)
				return (0);
		}
	}
	return (1);
}
