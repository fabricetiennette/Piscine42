/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:17:11 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/27 10:19:15 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*buffer;
	int		i;

	buffer = NULL;
	if (tab)
	{
		if (length <= 0)
			return (buffer);
		if ((buffer = malloc(sizeof(int) * length)) == NULL)
			return (buffer);
		i = -1;
		while (++i < length)
			buffer[i] = f ? f(tab[i]) : tab[i];
	}
	return (buffer);
}
