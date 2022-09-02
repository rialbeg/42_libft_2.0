/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:21:01 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/10/11 16:21:02 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	unsigned int	max_len;
	char			*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start < s_len)
		max_len = s_len - start;
	if (start >= s_len)
		max_len = 0;
	if (max_len > len)
		max_len = len;
	sub = (char *)malloc((max_len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, max_len + 1);
	return (sub);
}
