/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 22:36:30 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/28 22:37:53 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

char	**ft_split_whitespaces(char *str);

int		main(int ac, char **av)
{ 
	char	**tab;
	int		i = 0;

	tab = ft_split_whitespaces(av[1]);
	ft_sort_wordtab(tab);
	while (tab[i])
	{
		printf("%s\n",tab[i]);
		i++;
	}
	return (0);
}
