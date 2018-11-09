/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:40:04 by pforciol          #+#    #+#             */
/*   Updated: 2018/11/09 10:58:29 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*temps1;
	const char	*temps2;

	i = 0;
	temps1 = s1;
	temps2 = s2;
	while (i < n)
	{
		while ((temps1[i] != 0 && temps2[i] != 0) && temps1[i] == temps2[i])
			i++;
		return (temps1[i] - temps2[i]);
	}
	return (0);
}
