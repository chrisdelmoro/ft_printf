/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:12:42 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/02 19:35:58 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include "./libft/libft.h"

void print(const char *str, va_list args)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				ft_putchar(va_arg(args, int));
			}
			if (str[i + 1] == 's')
			{
				ft_putstr(va_arg(args, char *));
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
				ft_putchar('%');
			}
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int ft_printf(const char *str, ...)
{
	va_list args;

	va_start(args, str);
	print(str, args);
	va_end(args);
	
	return (1);
}
