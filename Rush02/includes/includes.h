/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:15:56 by dchampag          #+#    #+#             */
/*   Updated: 2018/02/25 20:48:40 by dchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	*rush00(int x, int y);

char	*rush01(int x, int y);

char	*rush02(int x, int y);

char	*rush03(int x, int y);

char	*rush04(int x, int y);

void	ft_display_colle(int colle, int x, int y, int nb);

#endif
