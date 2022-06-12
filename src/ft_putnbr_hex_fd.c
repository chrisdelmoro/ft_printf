/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:39:35 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/12 17:32:49 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_hex_fd(unsigned long nbr, char *base, int fd)
{
	size_t	count;

	count = 0;
	if (nbr / 16 > 0)
		count += ft_putnbr_hex_fd(nbr / 16, base, fd);
	ft_putchar_fd(base[nbr % 16], fd);
	return (count + 1);
}
