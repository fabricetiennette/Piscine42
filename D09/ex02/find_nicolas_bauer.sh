# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/15 22:39:06 by jeetienn          #+#    #+#              #
#    Updated: 2018/02/16 11:52:29 by jeetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#grep -i "\(^\|\s\)nicolas\s" $1 | grep -i "\(^\|\s\)bauer\s" | grep -Eow "[0-9-]+" | grep "-"#

cat contacts_hard.txt | grep -i "nicolas	bauer"
