/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:15:57 by javigner          #+#    #+#             */
/*   Updated: 2018/02/25 19:51:47 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	set_line(char values[3], int len, char *str, int *i);

char	*rush04(int x, int y)
{
	int		taille;
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (x * y));
	if (x > 2147483647 || y > 2147483647)
		return (NULL);
	if (x <= 0 || y <= 0)
		return (NULL);
	taille = y;
	while (taille >= 1)
	{
		if (taille == y)
			set_line((char[3]){'A', 'C', 'B'}, x, str, &i);
		else if (taille == 1)
			set_line((char[3]){'C', 'A', 'B'}, x, str, &i);
		else
			set_line((char[3]){'B', 'B', ' '}, x, str, &i);
		taille = taille - 1;
		str[i++] = '\n';
	}
	str[i] = '\0';
	return (str);
}
