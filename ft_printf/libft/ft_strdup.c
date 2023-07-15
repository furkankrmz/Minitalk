/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:58:35 by akirmizi          #+#    #+#             */
/*   Updated: 2022/01/12 16:27:05 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//int main( void )
// {
//     const char *cp1 = "Bilgisayar";
//     char *cp2 = strdup(cp1);

//     printf("İlk karakter dizisi: %s\n", cp1);
//     printf("Benzer olarak oluşturulan karakter dizisi: %s", cp2);

//     return 0;
// }
