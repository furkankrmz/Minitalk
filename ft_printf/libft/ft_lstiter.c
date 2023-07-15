/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:56:05 by akirmizi          #+#    #+#             */
/*   Updated: 2022/01/18 17:01:43 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void ft_putstr(char *str)
{
	while(*str)
	write(1, str++, 1);
}
int main ()

{
	t_list *a;
	a = NULL;
	ft_lstadd_back(&a, ft_lstnew("hello "));
	ft_lstadd_back(&a, ft_lstnew("world"));
	ft_lstiter(a, (void (*)(void *))ft_putstr);
}
*/
