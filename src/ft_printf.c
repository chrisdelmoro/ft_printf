/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:12:42 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/10 14:54:54 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_vprintf(const char *str, va_list args)
{
	size_t	i;
	int		count;
	char	*str_arg;
	int		int_arg;

	i = 0;
	count = 0;
	int_arg = 0;
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
			{
				str_arg = va_arg(args, char *);
				if (str_arg)
				{
					ft_putstr_fd(str_arg, 1);
					count += ft_strlen(str_arg);
				}
			}
			if (str[i + 1] == 'p')
			{
				ft_putstr_fd("0x", 1);
				//ft_putnbr_base_fd(va_arg(args, void *), "0123456789ABCDEF", 1);
			}
			if (str[i + 1] == 'd' || str[i + 1] == 'i')
			{
				int_arg = va_arg(args, int);
				str_arg = ft_itoa(int_arg);
				count += ft_strlen(str_arg);
				ft_putstr_fd(str_arg, 1);
				ft_freethis(&str_arg, NULL);
			}
			if (str[i + 1] == 'u')
				count += ft_putunbr_fd(va_arg(args, unsigned int), 1);
			if (str[i + 1] == 'x')
				count += ft_putnbr_hex_fd(va_arg(args, int), "0123456789abcdef", 1);
			if (str[i + 1] == 'X')
				count += ft_putnbr_hex_fd(va_arg(args, int), "0123456789ABCDEF", 1);
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
