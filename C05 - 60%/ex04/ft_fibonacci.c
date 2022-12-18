/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:19:32 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/08 12:39:01 by yx.he            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include<stdio.h>
int main(void)
{
	printf("%d ", ft_fibonacci(0));
	printf("%d ", ft_fibonacci(1));
	printf("%d ", ft_fibonacci(2));
	printf("%d ", ft_fibonacci(3));
	printf("%d ", ft_fibonacci(4));
	printf("%d ", ft_fibonacci(5));
}
*/