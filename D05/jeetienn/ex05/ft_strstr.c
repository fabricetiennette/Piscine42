/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 22:48:31 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/12 22:56:50 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}
