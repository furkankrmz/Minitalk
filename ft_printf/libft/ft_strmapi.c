/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:31:35 by akirmizi          #+#    #+#             */
/*   Updated: 2022/01/11 14:47:58 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		i;

	if (!s || !f)
		return (0);
	c = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!c)
		return (0);
	i = 0;
	while (s[i])
	{
		c[i] = f(i, s[i]);
		++i;
	}
	c[i] = '\0';
	return (c);
}
