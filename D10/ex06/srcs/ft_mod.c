/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:59:44 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/27 11:00:48 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dope.h"

char	*ft_mod(int l, int r, int *out)
{
	if (r == 0)
		return ("Stop : modulo by zero");
	*out = l % r;
	return (NULL);
}
