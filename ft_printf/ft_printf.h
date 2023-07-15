/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:34:42 by akirmizi          #+#    #+#             */
/*   Updated: 2022/03/04 16:36:20 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

int		ft_putstr(char *str);
int		ft_printf(const char *sign, ...);
int		ft_putchar(char c);
int		ft_putpointer(void *ptr);
int		ft_putnbr(int number);
int		ft_putunint(unsigned int number);
int		ft_convert(size_t num, char *set);

#endif
