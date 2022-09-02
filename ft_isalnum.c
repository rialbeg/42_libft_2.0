/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:04:13 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/08/25 16:46:06 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	int	flag;
	int	alnum;

	alnum = 47;
	flag = 0;
	while (alnum <= 122)
	{
		if (alnum >= 48 && alnum <= 57 && n == alnum)
			flag = 1;
		if (alnum >= 65 && alnum <= 90 && n == alnum)
			flag = 1;
		if (alnum >= 97 && alnum <= 122 && n == alnum)
			flag = 1;
		alnum++;
	}
	return (flag);
}
