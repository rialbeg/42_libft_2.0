/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsilva-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:12:58 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/10/30 18:28:51 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	num_words;

	num_words = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			num_words++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (num_words);
}

char	**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		index;
	const char	*start;
	char		**split;

	split = (char **) malloc((count_words(s, c) + 1) * sizeof(*split));
	if (!split)
		return (NULL);
	index = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (*(s - 1) != c)
			split[index++] = ft_substr(start, 0, len);
	}
	split[index] = NULL;
	return (split);
}
