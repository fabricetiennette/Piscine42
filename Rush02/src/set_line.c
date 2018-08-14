/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:57:30 by dchampag          #+#    #+#             */
/*   Updated: 2018/02/25 19:54:08 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_line(char values[3], int len, char *str, int *i)
{
	int		j;

	j = 0;
	while (j < len)
	{
		if (j == 0)
			str[*i] = values[0];
		else if (j == len - 1)
			str[*i] = values[1];
		else
			str[*i] = values[2];
		(*i)++;
		j++;
	}
}
