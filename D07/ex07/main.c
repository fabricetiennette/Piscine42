/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:56:45 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/24 12:47:42 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char **argv)
{
	char **new;
	int i;

	i = 0;
	new = ft_split(argv[1], argv[2]);
	while (new[i] != '\0')
	{
		printf("%s\n", new[i]);
		i++;
	}
}
