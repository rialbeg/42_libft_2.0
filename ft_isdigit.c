/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:05:20 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/25 15:23:25 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	int	flag;
	int	digit;

	digit = 48;
	flag = 0;
	while (digit <= 57)
	{
		if (digit == n)
			flag = 1;
		digit++;
	}
	return (flag);
}
