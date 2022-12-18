/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:58:49 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/06 11:45:57 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
    printf("%d\n", ft_str_is_lowercase("abcdef"));
    printf("%d\n", ft_str_is_lowercase("1234ef"));
    printf("%d\n", ft_str_is_lowercase("ABCD"));
}
*/
