/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:00:12 by nhe               #+#    #+#             */
/*   Updated: 2022/11/29 14:23:15 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(int i1, int i2, int i3)
{
	write(1, &i1, 1);
	write(1, &i2, 1);
	write(1, &i3, 1);
	if (i1 != '7' || i2 != '8' || i3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = '0';
	while (i1 <= '7')
	{
		i2 = i1 + 1;
		while (i2 <= '8')
		{
			i3 = i2 + 1;
			while (i3 <= '9')
			{
				ft_print_numbers(i1, i2, i3);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
