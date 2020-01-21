/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_ch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:39:35 by pforciol          #+#    #+#             */
/*   Updated: 2019/10/04 16:58:57 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_ch(char const *s1, char c)
{
	char	*out;
	size_t	len;

	if (!s1 || !c)
		return (NULL);
	len = ft_strlen(s1);
	if (!(out = ft_strnew(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strcpy(out, s1);
	out[len] = c;
	return (out);
}
