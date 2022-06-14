/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:40:22 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/13 20:58:08 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_u(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_put_u((n / 10), fd);
	ft_putchar_fd(((n % 10) + 48), fd);
	return (count + 1);
}
