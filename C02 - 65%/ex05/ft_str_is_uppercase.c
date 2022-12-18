/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:04:38 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/06 11:43:59 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str <= 'Z' && *str >= 'A')
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
    printf("%d\n", ft_str_is_uppercase("abcde"));
    printf("%d\n", ft_str_is_uppercase("Ab123c"));
    printf("%d\n", ft_str_is_uppercase("ABCD"));
}
*/
