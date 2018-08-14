/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:46:29 by javigner          #+#    #+#             */
/*   Updated: 2018/02/25 19:52:14 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int res;

	i = 0;
	n = 1;
	res = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (n == -1)
		return (-res);
	return (res);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("aucune");
		return (0);
	}
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
