/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:32:11 by pforciol          #+#    #+#             */
/*   Updated: 2018/11/09 10:49:00 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*source;

	source = s;
	i = 0;
	while (i < n)
	{
		if (source[i] == (unsigned char)c)
			return (source[i]);
		i++;
	}
	return (NULL);
}
