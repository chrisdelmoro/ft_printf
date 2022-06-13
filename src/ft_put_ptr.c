/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:45:29 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/12 21:10:01 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_put_ptr(unsigned long ptr)
{
	int	count;
	
	count = 0;
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		count += 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		count += ft_putnbr_hex_fd(ptr , "0123456789abcdef", 1) + 2;
	}
	return (count);
}
