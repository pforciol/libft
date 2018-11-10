/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:53:33 by pforciol          #+#    #+#             */
/*   Updated: 2018/11/09 16:38:32 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (((const char*)src)[i] != c && ((const char*)src)[i] != '\0')
		i++;
	ft_memcpy(dst, src, (i > n) ? n : i + 1);
	return (i > n ? NULL : dst + i + 1);
}
