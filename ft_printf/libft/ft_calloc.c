/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:59:35 by akirmizi          #+#    #+#             */
/*   Updated: 2022/01/06 18:30:30 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main(void)
// {
//     int *a;
//     int  b;
//     a = (int *) ft_calloc(10, sizeof(int));
//     for (b=0; b<10; b++) {
//          *(a+b) = (b+1) * 5;
//          printf("%p adresindeki değer: %d\n", (a+b), *(a+b));
//     }
//     free(a);
// }
