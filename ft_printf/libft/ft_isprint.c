/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:36:00 by akirmizi          #+#    #+#             */
/*   Updated: 2022/01/03 11:40:54 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
