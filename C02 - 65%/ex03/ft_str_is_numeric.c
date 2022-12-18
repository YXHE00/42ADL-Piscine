/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:45:08 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/07 11:32:34 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include<stdio.h>
int main(void)
{
    printf("%d\n", ft_str_is_numeric("abc1234de"));
    printf("%d\n", ft_str_is_numeric("1234"));
    printf("%d\n", ft_str_is_numeric("abcdef"));
}
*/
