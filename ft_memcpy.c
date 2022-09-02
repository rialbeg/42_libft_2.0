/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:02:18 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/26 16:16:20 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*str1;
	unsigned char	*str2;

	count = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (count < n)
	{
		str1[count] = str2[count];
		count++;
	}
	return (str1);
}
