/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:31:48 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/10/07 21:33:05 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = s;
	temp = temp + ft_strlen(s);
	while (*temp != (char)c && temp != s)
		temp--;
	if (*temp == (char)c)
		return ((char *)temp);
	return (0);
}
