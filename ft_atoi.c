/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsilva-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:56:55 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/10/29 18:11:25 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c == '\f'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	is_neg;

	is_neg = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = -1;
		str++;
	}
	while (ft_isdigit(*str))
		res = (res * 10) + (*str++ - 48);
	return (res * is_neg);
}
