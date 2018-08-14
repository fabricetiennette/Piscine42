/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 16:09:27 by oespion           #+#    #+#             */
/*   Updated: 2018/02/18 14:44:38 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char **ft_print_table(char **argv)
{
	char    **tab;
	int     r;
	int     i;
			
	i = 0;
	r = 0;
	argv++;
	tab = (char**)malloc((sizeof(char*) * 9));
	while (argv[r] != '\0')
	{
		tab[r] = (char*)malloc((sizeof(char) * 9));
		i = 0;
		while (argv[r][i] != '\0')
		{
			tab[r][i] = argv[r][i];
			i++;
		}
		r++;
	}
	return (tab);
}
