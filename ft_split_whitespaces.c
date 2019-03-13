/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforciol <pforciol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 12:08:30 by pforciol          #+#    #+#             */
/*   Updated: 2019/03/13 13:01:21 by pforciol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *str)
{
	int		i;
	int		in_word;
	int		count;

	i = 0;
	in_word = 0;
	count = 0;
	if (str == NULL)
		return (0);
	while (str[i] == '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static int	ft_word_length(char *str, int i)
{
	int		length;

	length = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
			&& str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}


char		**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	words = (char**)malloc(sizeof(char*) * ft_word_count(str) + 1);
	while (str[i] != '\0' && j < ft_word_count(str))
	{
		k = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		words[j] = (char*)malloc(sizeof(char) * ft_word_length(str, i) + 1);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
		{
			words[j][k++] = str[i++];
		}
		words[j][k] = '\0';
		j++;
	}
	words[j] = 0;
	return (words);
}
