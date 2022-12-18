/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:10:56 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/08 11:16:56 by yx.he            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		i *= ft_recursive_power(nb, power -1);
	}
	return (i);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 2));
}
*/