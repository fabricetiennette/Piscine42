/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 14:06:24 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/18 14:23:13 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *rptr;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	rptr = range;
	while (min < max)
		*rptr++ = min++;
	return (range);
}
