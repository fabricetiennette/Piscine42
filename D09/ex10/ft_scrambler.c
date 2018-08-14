/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 08:51:15 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/16 08:55:29 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tempa;
	int tempb;
	int tempc;
	int tempd;

	tempa = ***a;
	tempb = *b;
	tempc = *******c;
	tempd = ****d;
	***a = tempb;
	*b = tempd;
	*******c = ***a;
	****d = *******c;
}
