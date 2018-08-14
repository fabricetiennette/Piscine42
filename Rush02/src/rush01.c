/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:10:06 by javigner          #+#    #+#             */
/*   Updated: 2018/02/25 19:53:37 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	set_line(char values[3], int len, char *str, int *i);

char	*rush01(int x, int y)
{
	int		taille;
	char	*str;
	int		i;

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
			set_line((char[3]){'/', '\\', '*'}, x, str, &i);
		else if (taille == 1)
			set_line((char[3]){'\\', '/', '*'}, x, str, &i);
		else
			set_line((char[3]){'*', '*', ' '}, x, str, &i);
		taille = taille - 1;
		str[i++] = '\n';
	}
	str[i] = '\0';
	return (str);
}
