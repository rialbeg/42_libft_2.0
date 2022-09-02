/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:00:28 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/26 16:00:32 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			count;
	unsigned char	*stri;

	stri = (unsigned char *)str;
	count = 0;
	while (count < n)
	{
		stri[count++] = 0;
	}
}
