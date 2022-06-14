/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_xX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:39:35 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/13 21:17:50 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_x(unsigned long nbr, char *base, int fd)
{
	int	count;

	count = 0;
	if (nbr / 16 > 0)
		count += ft_put_x(nbr / 16, base, fd);
	ft_putchar_fd(base[nbr % 16], fd);
	return (count + 1);
}
