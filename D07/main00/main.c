/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:03:29 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/21 14:14:51 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *test = "Hello, World!";
	char *copy;

	copy = ft_strdup(test);
	printf("%s\n", test);
	printf("%s\n", copy);
	return (0);
}
