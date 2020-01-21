/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:42:42 by pforciol          #+#    #+#             */
/*   Updated: 2019/09/26 16:43:02 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_realloc(void *ptr, size_t cur_size, size_t new_size)
{
	void		*new_ptr;

	if (!ptr)
		return (malloc(new_size));
	if (new_size <= cur_size)
		return (ptr);
	if (!(new_ptr = malloc(new_size)))
		return (NULL);
	ft_memcpy(new_ptr, ptr, cur_size);
	free(ptr);
	return (new_ptr);
}
