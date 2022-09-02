/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 21:43:19 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/26 21:43:21 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*pdst;
	char	*psrc;
	int		len;

	len = (int)n - 1;
	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	if (psrc < pdst)
	{
		while (len-- >= 0)
			pdst[len + 1] = psrc[len + 1];
	}
	else
	{
		while (i++ < n)
			pdst[i - 1] = psrc[i - 1];
	}
	return ((void *)pdst);
}
