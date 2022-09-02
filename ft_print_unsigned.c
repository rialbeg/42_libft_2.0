/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsilva-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:43:19 by gsilva-d          #+#    #+#             */
/*   Updated: 2022/09/01 22:15:10 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*my_uitoa(char *x, unsigned int number, int len)
{
	while (number > 0)
	{
		x[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (x);
}

static	size_t	ucount_digits(unsigned int n)
{
	int	len;

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

static char	*ft_uitoa(unsigned int n)
{
	char				*s;
	int					len;
	unsigned int		number;

	len = ucount_digits(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	number = n;
	s = my_uitoa(s, number, len);
	return (s);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uitoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
