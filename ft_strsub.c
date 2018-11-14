/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:31:33 by pforciol          #+#    #+#             */
/*   Updated: 2018/11/14 13:49:09 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tr;
	size_t	i;

	i = 0;
	if (!(tr = malloc(sizeof(char) * len)))
		return (NULL);
	while (i < len)
	{
		tr[i] = s[start];
		start++;
		i++;
	}
	return (tr);
}
