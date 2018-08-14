/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:53:29 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/28 21:58:11 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*));

int		equals_4(char* str)
{
	if (str[0] == '4' && str[1] == '\0')
		return (1);
	return (0);
}

int		main(void)
{
	char	*(tab[4]) = {"facebook", "42", "0google", "0"};
	printf("%i\n", equals_4(tab[1]));
	printf("%i\n", ft_any(tab, &equals_4));
	return (0);
}
