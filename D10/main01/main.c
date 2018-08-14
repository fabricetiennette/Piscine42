/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:20:46 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/28 21:25:06 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab,int length, void(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			ft_putnbr(147483648);
			return ;
		}
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int		main()
{
	int		tab[5] = {1, 14, 17, 42, 16};

	ft_foreach(tab,5,&ft_putnbr);
	return 0;
}
