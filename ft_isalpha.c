/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:04:13 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/25 15:04:17 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int n)
{
	int	flag;
	int	low;
	int	up;

	low = 97;
	up = 65;
	flag = 0;
	while (up <= 90)
	{
		if (up == n)
			flag = 1;
		up++;
	}
	while (low <= 122)
	{
		if (low == n)
			flag = 1;
		low++;
	}
	return (flag);
}
