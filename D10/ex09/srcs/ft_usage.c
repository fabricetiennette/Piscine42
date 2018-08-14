/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:29:08 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/27 14:29:45 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "ft_dope.h"
#include "ft_opp.h"

#define STRNSIZE(s) (s),(sizeof(s)-1)

char	*ft_usage(int l, int r, int *out)
{
	t_opp	*opps;
	int		len;
	char	*bptr;

	(void)l;
	(void)r;
	(void)out;
	write(1, STRNSIZE("error : only [ "));
	opps = g_opptab;
	if (opps)
	{
		len = sizeof(g_opptab) / sizeof(*g_opptab);
		while (opps - g_opptab < len)
		{
			bptr = opps->op;
			while (*bptr)
				++bptr;
			write(1, opps->op, bptr - opps->op);
			if (opps - g_opptab < len - 1)
				write(1, " ", 1);
			++opps;
		}
	}
	return ("] are accepted.");
}
