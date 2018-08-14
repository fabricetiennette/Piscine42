/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 11:50:51 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/09 13:38:50 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
