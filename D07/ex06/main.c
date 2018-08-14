/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 13:04:15 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/26 12:01:40 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char **argv)
{
		char *nbr;
		char *base_from;
		char *base_to;

		while (argc >= 4)
		{
			printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
		return (0);
		}
}
