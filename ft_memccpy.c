/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:53:33 by pforciol          #+#    #+#             */
/*   Updated: 2018/11/09 10:13:00 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	i = 0;
	if (destination && source)
	{
		while (i < n)
		{
			destination[i] = source[i];
			if (source[i] == (unsigned char)c)
				return (destination[i + 1]);
			i++;
		}
	}
	return (NULL);
}
