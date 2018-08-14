/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 17:14:30 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 19:03:15 by tgelu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char start, char end, char fill, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (i == 0)
			ft_putchar(start);
		else if (i == len - 1)
			ft_putchar(end);
		else
			ft_putchar(fill);
		i++;
	}
}

void	rush(int x, int y)
{
	int height;

	if (x == 0 || y == 0)
		return ;
	height = y;
	y = 0;
	while (y < height)
	{
		if (y == 0)
			ft_print_line('/', '\\', '*', x);
		else if (y == height - 1)
			ft_print_line('\\', '/', '*', x);
		else
			ft_print_line('*', '*', ' ', x);
		ft_putchar(' ');
		y++;
		ft_putchar('\n');
	}
}
