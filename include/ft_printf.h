/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:03:01 by ccamargo          #+#    #+#             */
/*   Updated: 2022/06/13 21:00:38 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_put_u(unsigned int n, int fd);
int	ft_put_xX(unsigned long nbr, char *base, int fd);
int	ft_put_p(unsigned long ptr);
int	ft_put_s(const char *str);
int	ft_put_di(int nbr);

#endif
