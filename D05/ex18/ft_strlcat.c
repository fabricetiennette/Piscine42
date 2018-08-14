/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 11:48:59 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/13 12:48:02 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_size;
	unsigned int dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0' && dest_size < size)
		dest_size++;
	src_size = 0;
	while (src[src_size])
	{
		if (src_size + dest_size + 1 < size)
			dest[dest_size + src_size] = src[src_size];
		src_size++;
	}
	dest[dest_size + src_size] = '\0';
	return (dest_size + src_size);
}
