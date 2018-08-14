/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:09:38 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/16 14:31:56 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	int i;

	i = 0;
	while(i <= '9')
	{
		ft_putchar(i);
		i = i + 1;
	}
}

int		main()
{
	ft_print_number();
	return (0);
}
