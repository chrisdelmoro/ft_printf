/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:12:42 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/13 20:50:41 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_vprintf(const char *str, va_list args)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
				count++;
			}
			if (str[i + 1] == 's')
				count += ft_print_str(va_arg(args, char *));
			if (str[i + 1] == 'p')
				count += ft_put_ptr(va_arg(args, unsigned long));
			if (str[i + 1] == 'd' || str[i + 1] == 'i')
				count += ft_put_di(va_arg(args, int));
			if (str[i + 1] == 'u')
				count += ft_putunbr_fd(va_arg(args, unsigned int), 1);
			if (str[i + 1] == 'x')
				count += ft_putnbr_hex_fd(va_arg(args, unsigned int), "0123456789abcdef", 1);
			if (str[i + 1] == 'X')
				count += ft_putnbr_hex_fd(va_arg(args, unsigned int), "0123456789ABCDEF", 1);
			if (str[i + 1] == '%')
			{
				ft_putchar_fd('%', 1);
				count++;
			}
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
			count++;
		}
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!str)
		return (0);
	va_start(args, str);
	count = ft_vprintf(str, args);
	va_end(args);
	return (count);
}
