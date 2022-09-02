/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsamascarenhas@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:11:22 by gsilva-d          #+#    #+#             */
/*   Updated: 2021/10/17 20:27:51 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*my_itoa(char *x, unsigned int number, int len)
{
	while (number > 0)
	{
		x[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (x);
}

static size_t	count_digits(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*s;
	int					len;
	unsigned int		number;

	len = count_digits(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = my_itoa(s, number, len);
	return (s);
}
