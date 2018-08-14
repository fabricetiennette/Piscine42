/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:51:31 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/21 14:12:21 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char *dup;
	char *fptr;
	char *dptr;

	fptr = src;
	while (*fptr++)
		;
	dup = malloc(fptr - src + 1);
	if (!dup)
		return (NULL);
	dptr = dup;
	while ((*dptr++ = *src++) != '\0')
		;
	return (dup);
}
