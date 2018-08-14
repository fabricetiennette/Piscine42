/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 22:41:43 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 22:47:52 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		nb = 1;
	if (power < 0)
		nb = 0;
	if (power-- > 1)
		nb = nb * ft_recursive_power(nb, power);
	return (nb);
}
