/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsilva-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:46:36 by gsilva-d          #+#    #+#             */
/*   Updated: 2022/09/01 22:16:36 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_hex_len(unsigned long int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static	void	ft_format_hex_letter(unsigned long int num, char format)
{
	if (format == 'x')
		ft_putchar_fd((num - 10 + 'a'), 1);
	else if (format == 'X')
		ft_putchar_fd((num - 10 + 'A'), 1);
}

void	ft_puthex_format(unsigned long int num, char format)
{
	if (num >= (unsigned long int)16)
	{
		ft_puthex_format(num / 16, format);
		ft_puthex_format(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_format_hex_letter(num, format);
	}
}

int	ft_printhex(unsigned long int n, char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	ft_puthex_format(n, format);
	return (ft_hex_len(n));
}
