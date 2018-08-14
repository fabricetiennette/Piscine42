/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:24:15 by jeetienn          #+#    #+#             */
/*   Updated: 2018/03/01 16:03:39 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int diff1;
	int diff2;

	i = 0;
	while (i < length - 2)
	{
		diff1 = f(tab[i], tab[i + 1]);
		diff2 = f(tab[i + 1], tab[i + 2]);
		if ((diff1 < 0) != (diff2 > 0))
			return (0);
		i++;
	}
	return (1);
}
