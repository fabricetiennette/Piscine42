/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 14:55:24 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/11 16:32:34 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		longeur;
	char	jee;

	i = 0;
	longeur = 0;
	while (str[longeur])
		longeur++;
	while (i < longeur - 1)
	{
		jee = str[i];
		str[i] = str[longeur - 1];
		str[longeur - 1] = jee;
		longeur--;
		i++;
	}
	return (str);
}
