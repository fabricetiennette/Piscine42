/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:03:46 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/27 12:04:22 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_swap_2(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	flag;

	if (tab == NULL || cmp == NULL)
		return ;
	i = 0;
	while (tab[i])
		++i;
	while (--i > (flag = 0))
	{
		j = -1;
		while (++j < i)
			if (cmp(tab[j + 1], tab[j]) < 0)
				ft_swap_2(tab + j + (flag = 1), tab + j);
		if (flag == 0)
			break ;
	}
}
