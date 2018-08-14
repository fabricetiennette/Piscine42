/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:31:48 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/19 15:48:06 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	char *sptr;

	while (*tab)
	{
		sptr = *tab;
		while (*sptr)
			ft_putchar(*sptr++);
		ft_putchar('\n');
		++tab;
	}
}
