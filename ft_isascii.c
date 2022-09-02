/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:04:13 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/25 17:24:20 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	int	flag;
	int	ascii;

	ascii = 0;
	flag = 0;
	while (ascii <= 127)
	{
		if (n == ascii)
			flag = 1;
		ascii++;
	}
	return (flag);
}
