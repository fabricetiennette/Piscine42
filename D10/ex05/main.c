/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 22:31:50 by jeetienn          #+#    #+#             */
/*   Updated: 2018/03/01 16:05:41 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_comp(int i, int j)
{
	return (i-j);
}

int		main()
{
	int		sorted_tab[4] = {9, 8, 7, 6};
	int		nonsorted_tab[4] = {11, 21, 41, 11};
	int		sorted = ft_is_sort(sorted_tab, 4, &ft_comp);
	int		nonsorted = ft_is_sort(nonsorted_tab, 4, &ft_comp);
	printf("%i, %i", sorted, nonsorted);
	return 0;
}
