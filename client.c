/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akirmizi <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:01:35 by akirmizi          #+#    #+#             */
/*   Updated: 2022/05/14 14:24:49 by akirmizi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_kill(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(50);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR2);
		usleep(50);
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("enter at least two arguments\n");
		return (0);
	}
	ft_kill(ft_atoi(av[1]), av[2]);
	ft_kill(ft_atoi(av[1]), "\n");
}
