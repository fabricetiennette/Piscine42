/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:08:04 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/27 14:08:40 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dope.h"

char	*ft_div(int l, int r, int *out)
{
	if (r == 0)
		return ("Stop : division by zero");
	*out = l / r;
	return (NULL);
}
