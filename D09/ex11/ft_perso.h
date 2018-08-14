/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 09:47:39 by jeetienn          #+#    #+#             */
/*   Updated: 2018/02/16 10:33:10 by jeetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PERSO_H
# define _FT_PERSO_H

# include <string.h>
# define SAVE_THE_WORLD "agent"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
#endif
