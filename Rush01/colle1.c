/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 15:37:17 by oespion           #+#    #+#             */
/*   Updated: 2018/02/18 17:01:23 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	**ft_print_table(char **argv);
void	affichage(char **tab);

char	*ft_resolve_case()
{
	char	*nber;
	int		r;

	r = 0;
	nber = "123456789";
	while (nber[r] != '\0')
	{
		if (ft_check_line(nber[r]) == 1)
			return (nber[r]);
		if (ft_check_column(nber[r] == 1))
			return (nber[r]);
		if (ft_check_block(nber[r] == 1))
			return (nber[r]);
		r++;
	}
	return ('.');
}

char	**resolve(char **tab)
{
	int	r;
	int	i;

	r = 0;
	while (r < 9)
	{
		i = 0;
		while (i < 9)
		{
			if (tab[r][i] == '.')
			{
				if (ft_resolve_case != '.')
				{
					tab[r][i] == ft_resolve_case();
					r = -1;
					i = -1;
				}
			}
			i++;
		}
		r++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	char	**tab;

	if (argc != 10)
	{
		ft_putstr("Error");
		ft_putchar('\n');
	}

	tab = ft_print_table(argv);
	affichage(tab);
	return (0);
}
