/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:03:01 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/12 21:13:53 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_putunbr_fd(unsigned int n, int fd);
size_t	ft_putnbr_hex_fd(unsigned int nbr, char *base, int fd);
int	ft_put_ptr(unsigned long ptr);
int	ft_print_str(const char *str);

#endif
