/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:21:47 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/23 09:02:14 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *rptr;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (0);
	rptr = *range;
	while (min < max)
		*rptr++ = min++;
	return ((int)(rptr - *range));
}
