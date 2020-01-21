/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_re_strjoin_ch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:41:35 by pforciol          #+#    #+#             */
/*   Updated: 2019/10/22 14:00:56 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_re_strjoin_ch(char *s1, char c)
{
	char	*new;

	if (!c)
		return (s1);
	if (!(new = ft_strjoin_ch(s1, c)))
		return (NULL);
	free(s1);
	s1 = NULL;
	return (new);
}
