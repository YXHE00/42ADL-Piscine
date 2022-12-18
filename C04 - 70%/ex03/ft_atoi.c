/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:33:15 by nhe               #+#    #+#             */
/*   Updated: 2022/12/08 00:27:08 by yx.he            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	multi;
	int	count;

	multi = 1;
	count = 0;
	i = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			multi *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count = (count * 10) + (str[i] - '0');
		i++;
	}
	count *= multi;
	return (count);
}
/*
#include<stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi("---+++1234"));
    printf("%d\n", ft_atoi("   ---+++1234abc123"));
	printf("%d\n", ft_atoi("---+--+1234ab567"));
    return (0);
}
*/