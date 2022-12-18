/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:39:35 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/13 12:22:41 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	a;
	long	i;

	if (nb < 1)
	{
		return (0);
	}
	i = 1;
	a = nb;
	while (i * i < a)
	{
		i++;
	}
	if (i * i == a)
	{
		return (i);
	}
	return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	int	a;

	a = 36;
	printf("Num = %d, square root = %d.\n", a, ft_sqrt(a));
}
*/