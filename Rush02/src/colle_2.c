/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:16:44 by dchampag          #+#    #+#             */
/*   Updated: 2018/02/25 20:48:44 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

#define SIZE_BUFFER 65000

int		*dimensions(char *str)
{
	int *tab;
	int i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * 2);
	tab[0] = 0;
	tab[1] = 0;
	while (str[i] != '\n')
	{
		tab[0]++;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			tab[1]++;
		i++;
	}
	return (tab);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (s1 - s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_verif_colle(char *buf, int *dim)
{
	int i;

	i = 0;
	if (ft_strcmp(buf, rush00(dim[0], dim[1])) == 0)
		ft_display_colle(0, dim[0], dim[1], i++);
	if (ft_strcmp(buf, rush01(dim[0], dim[1])) == 0)
		ft_display_colle(1, dim[0], dim[1], i++);
	if (ft_strcmp(buf, rush02(dim[0], dim[1])) == 0)
		ft_display_colle(2, dim[0], dim[1], i++);
	if (ft_strcmp(buf, rush03(dim[0], dim[1])) == 0)
		ft_display_colle(3, dim[0], dim[1], i++);
	if (ft_strcmp(buf, rush04(dim[0], dim[1])) == 0)
		ft_display_colle(4, dim[0], dim[1], i++);
	if (i == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		main(void)
{
	char	buf[SIZE_BUFFER + 1];
	int		i;
	int		*dim;

	i = 0;
	while ((read(0, &buf[i], 1)))
		i++;
	buf[i] = '\0';
	if (!buf[0])
	{
		ft_putstr("aucune\n");
		return (0);
	}
	dim = dimensions(buf);
	ft_verif_colle(buf, dim);
	return (0);
}
