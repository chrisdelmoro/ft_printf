/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:12:42 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/02 21:52:52 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

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
				
			}
			if (str[i + 1] == 'd')
			{
				
			}
			if (str[i + 1] == 'i')
			{
				
			}
			if (str[i + 1] == 'u')
			{
				
			}
			if (str[i + 1] == 'x')
			{
				
			}
			if (str[i + 1] == 'X')
			{
				
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
