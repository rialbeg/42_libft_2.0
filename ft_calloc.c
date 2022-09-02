/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:16:56 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/10/08 21:33:36 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;
	size_t	real_size;

	real_size = nitems * size;
	p = malloc(real_size);
	if (!p || (real_size > INT_MAX))
		return (p);
	ft_bzero (p, real_size);
	return ((void *)p);
}
