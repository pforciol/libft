/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:12:57 by pforciol          #+#    #+#             */
/*   Updated: 2019/11/04 15:17:29 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_freearray(char **commands)
{
	int		i;

	if (!commands)
		return ;
	i = 0;
	while (commands && commands[i])
		free(commands[i++]);
	if (commands)
		free(commands);
}
