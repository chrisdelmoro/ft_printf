/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:39:35 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/10 14:51:10 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hex_fd(int nbr, char *base, int fd)
{
	long	new_nbr;
	int		count;

	count = 0;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		count += 1;
		new_nbr = nbr;
		new_nbr = new_nbr * (-1);
	}
	else
		new_nbr = nbr;
	if (new_nbr >= 16)
		count += ft_putnbr_hex_fd((new_nbr / 16), base, fd);
	ft_putchar_fd(base[new_nbr % 16], fd);
	return (count + 1);
}
