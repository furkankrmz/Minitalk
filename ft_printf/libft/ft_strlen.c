/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:18:00 by akirmizi          #+#    #+#             */
/*   Updated: 2022/01/03 13:28:54 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++ != 0)
		i++;
	return (i);
}
