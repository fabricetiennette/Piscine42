/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:51:04 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/13 22:58:19 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_size;

	src_size = 0;
	while (src[src_size])
	{
		if (src_size + 1 < src)
		{
			*dest = src[src_size];
			dest++;
		}
		src_size++;
	}
	*dest = '\0';
	return (src_size);
}
