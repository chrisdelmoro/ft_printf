/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:39:35 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/10 20:32:26 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_hex_fd(long nbr, char *base, int fd)
{
	unsigned long	ul_nbr;
	size_t			count;

	count = 0;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		count += 1;
		ul_nbr = nbr * (-1);
	}
	else
		ul_nbr = nbr;
	if (ul_nbr >= 16)
		count += ft_putnbr_hex_fd((ul_nbr / 16), base, fd);
	ft_putchar_fd(base[ul_nbr % 16], fd);
	return (count + 1);
}
