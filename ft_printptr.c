/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva-d <gsilva-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:52:43 by gsilva-d          #+#    #+#             */
/*   Updated: 2022/09/01 22:18:00 by gsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_ptr_len(unsigned long long num)
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

static	void	ft_format_hex_letter(unsigned long long num, char format)
{
	if (format == 'x')
		ft_putchar_fd((num - 10 + 'a'), 1);
	else if (format == 'X')
		ft_putchar_fd((num - 10 + 'A'), 1);
}

void	ft_putptr(unsigned long long num, char format)
{
	if (num >= (unsigned long long)16)
	{
		ft_putptr(num / 16, format);
		ft_putptr(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_format_hex_letter(num, format);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_length;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	print_length = 0;
	print_length += write(1, "0x", 2);
	ft_putptr(ptr, 'x');
	print_length += ft_ptr_len(ptr);
	return (print_length);
}
