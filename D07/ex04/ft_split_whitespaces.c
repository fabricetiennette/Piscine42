/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:36:39 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/21 16:21:15 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		ft_sws(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v' ||
			c == '\f');
}

static int		ft_wc(char *str)
{
	int		i;

	i = 0;
	while (*str)
		if (ft_sws(*str))
			++str;
		else
		{
			++i;
			++str;
			while (*str && !ft_sws(*str))
				++str;
		}
	return (i);
}

static char		*ft_split_w(char **str)
{
	char	*bptr;
	char	*bsptr;
	char	*sptr;

	sptr = *str;
	while (ft_sws(*sptr))
		++sptr;
	*str = sptr;
	while (!ft_sws(*sptr))
		++sptr;
	bptr = malloc((sptr - *str) * sizeof(char));
	if (!bptr)
		return (NULL);
	bsptr = bptr;
	while (sptr > *str)
		*bsptr++ = *((*str)++);
	*bsptr = '\0';
	while (**str && ft_sws(**str))
		++*str;
	return (bptr);
}

char			**ft_split_whitespaces(char *str)
{
	char	**buffer;
	char	**bptr;
	int		i;

	i = ft_wc(str);
	if (!(buffer = malloc((i + 1) * sizeof(char *))))
		return (NULL);
	bptr = buffer;
	while (i--)
		if (!(*bptr++ = ft_split_w(&str)))
			return (NULL);
	*bptr = (NULL);
	return (buffer);
}
