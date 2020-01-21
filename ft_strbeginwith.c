/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbeginwith.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:18:01 by pforciol          #+#    #+#             */
/*   Updated: 2019/11/19 13:59:58 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strbeginwith(char *str, char *begin)
{
	int		i;

	i = 0;
	while (begin[i])
	{
		if (str[i] != begin[i])
			return (0);
		i++;
	}
	return (1);
}
