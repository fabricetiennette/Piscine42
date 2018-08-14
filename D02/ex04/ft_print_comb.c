/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 09:15:56 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/09 13:33:40 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	fe_putchar(char x, char y, char z);

void	ft_print_comb(void)
{
	char n;
	char i;
	char a;

	n = '0';
	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			a = i + 1;
			while (a <= '9')
			{
				fe_putchar(n, i, a);
				if (n != '7' || i != '8' || a != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a++;
			}
			i++;
		}
		n++;
	}
}

void	fe_putchar(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}
