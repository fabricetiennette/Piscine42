/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 11:15:46 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/27 11:16:40 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_opp.h"

t_opp	*ft_opp(char *op)
{
	t_opp	*opps;
	int		len;

	if (op == NULL)
		return (NULL);
	opps = g_opptab;
	if (opps == NULL)
		return (NULL);
	len = sizeof(g_opptab) / sizeof(*g_opptab);
	while (opps->op && opps - g_opptab < len)
		if (ft_strcmp(op, opps->op) == 0)
			return (opps);
		else
			++opps;
	return (NULL);
}
