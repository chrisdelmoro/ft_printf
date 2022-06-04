/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:12:42 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/04 20:24:07 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd(((n % 10) + 48), fd);
}


int ft_vprintf(const char *str, va_list args)
{
	size_t	i;
	int 	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
			}
			if (str[i + 1] == 's')
			{
				ft_putstr_fd(va_arg(args, char *), 1);
			}
			if (str[i + 1] == 'p')
			{
				ft_putstr_fd("0x", 1);
				//ft_putnbr_base_fd(va_arg(args, void *), "0123456789ABCDEF", 1);
			}
			if (str[i + 1] == 'd')
			{
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			if (str[i + 1] == 'i')
			{
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			if (str[i + 1] == 'u')
			{
				ft_putunbr_fd(va_arg(args, unsigned int), 1);
			}
			if (str[i + 1] == 'x')
			{
				ft_putnbr_base_fd(va_arg(args, int), "0123456789abcdef", 1);
			}
			if (str[i + 1] == 'X')
			{
				ft_putnbr_base_fd(va_arg(args, int), "0123456789ABCDEF", 1);
			}
			if (str[i + 1] == '%')
			{
				ft_putchar_fd('%', 1);
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

int ft_printf(const char *str, ...)
{
	va_list args;
	int		count;

	count = 0;
	if (!str)
		return (0);
	va_start(args, str);
	count = ft_vprintf(str, args);
	va_end(args);
	return (count);
}
