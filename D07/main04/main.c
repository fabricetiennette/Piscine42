/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:56:45 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/21 16:26:52 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char str[] = "fabrice		etiennette    \n  ced! ";
	char **tab;
	int i;

	i = 0;
	tab = ft_split_whitespaces(str);
	if (!tab)
		return 1;
	while (tab[i])
	{
		printf("%s.\n", tab[i]);
	free(tab[i++]);
	}
	free(tab);
	return (0);
}
