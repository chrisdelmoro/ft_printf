/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:12:42 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/13 21:22:57 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
				count += ft_put_c(va_arg(args, int));
			if (str[i + 1] == 's')
				count += ft_put_s(va_arg(args, char *));
			if (str[i + 1] == 'p')
				count += ft_put_p(va_arg(args, unsigned long));
			if (str[i + 1] == 'd' || str[i + 1] == 'i')
				count += ft_put_di(va_arg(args, int));
			if (str[i + 1] == 'u')
				count += ft_put_u(va_arg(args, unsigned int), 1);
			if (str[i + 1] == 'x')
				count += ft_put_x(va_arg(args, unsigned int), HEX_LOWER, 1);
			if (str[i + 1] == 'X')
				count += ft_put_x(va_arg(args, unsigned int), HEX_UPPER, 1);
			if (str[i + 1] == '%')
				count += ft_put_c('%');
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
