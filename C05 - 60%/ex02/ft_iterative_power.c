/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:02:53 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/13 12:36:27 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 2));
}
*/