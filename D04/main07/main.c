/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:47:47 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/28 11:19:40 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_find_next_prime(int index);

int		main(void)
{
	printf("resultat : %d \n", ft_find_next_prime(7908));
	return (0);
}
