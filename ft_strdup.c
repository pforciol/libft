/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:12:12 by pforciol          #+#    #+#             */
/*   Updated: 2018/11/10 18:06:31 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const char *s2;

	if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(s1))))
		return (NULL);
	ft_strcpy((char*)s2, s1);
	return ((char*)s2);
}
