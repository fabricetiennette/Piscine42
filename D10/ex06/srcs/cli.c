/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cli.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:49:51 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/27 10:53:20 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_dope.h"

char	*ft_dope(char *l, char *op, char *r, int *out)
{
	t_opp	*opp;
	t_opp	*usage_opp;

	usage_opp = ft_opp("");
	if ((opp = ft_opp(op)) == NULL || opp->dope == NULL)
	{
		if (usage_opp && usage_opp->dope)
			return (usage_opp->dope(0, 0, out));
		return ("0");
	}
	return (opp->dope(ft_atoi(l), ft_atoi(r), out));
}

int		main(int argc, char **argv)
{
	int		result;
	char	*err;

	if (argc == 4)
	{
		result = 0;
		err = ft_dope(argv[1], argv[2], argv[3], &result);
		if (err != NULL)
			ft_putstr(err);
		else
			ft_putnbr(result);
		ft_putchar('\n');
	}
	return (0);
}
