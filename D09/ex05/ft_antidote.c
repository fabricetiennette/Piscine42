/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 21:43:42 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/15 21:54:00 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int temp;

	if (i > j)
	{
		temp = i;
		i = j;
		j = temp;
	}
	if (i > k)
	{
		temp = i;
		i = k;
		k = temp;
	}
	if (j > k)
	{
		temp = j;
		j = k;
		k = temp;
	}
	return (j);
}
