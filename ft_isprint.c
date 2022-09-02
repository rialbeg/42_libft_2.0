/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:04:13 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/25 17:46:14 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int n)
{
	int	flag;
	int	print;

	print = 32;
	flag = 0;
	while (print <= 126)
	{
		if (n == print)
			flag = 1;
		print++;
	}
	return (flag);
}
