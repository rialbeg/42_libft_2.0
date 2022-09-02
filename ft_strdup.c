/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:17:47 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/10/09 11:40:19 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*str;
	char	*p;

	len = 0;
	while (s[len])
		len++;
	str = malloc(len + 1);
	p = str;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return (str);
}
