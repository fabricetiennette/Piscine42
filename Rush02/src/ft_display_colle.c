/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_colle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 20:00:39 by dchampag          #+#    #+#             */
/*   Updated: 2018/02/25 20:07:28 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	ft_display_colle(int colle, int x, int y, int nb)
{
	if (nb > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(colle);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}
