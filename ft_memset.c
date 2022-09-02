/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:25:53 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/26 16:25:57 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*string;

	count = 0;
	string = (unsigned char *)str;
	while (count < n)
	{
		string[count++] = c;
	}
	return (string);
}
