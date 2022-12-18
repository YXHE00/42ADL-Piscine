/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:51:47 by nhe               #+#    #+#             */
/*   Updated: 2022/11/29 17:05:14 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int i1, int i2)
{
	ft_putchar((i1 / 10) + '0');
	ft_putchar((i1 % 10) + '0');
	write(1, " ", 1);
	ft_putchar((i2 / 10) + '0');
	ft_putchar((i2 % 10) + '0');
	if (i1 != 98 || i2 != 99)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 <= 98)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			print_number(i1, i2);
			i2++;
		}
		i1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
