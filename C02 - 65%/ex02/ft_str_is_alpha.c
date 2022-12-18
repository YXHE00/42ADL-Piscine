/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:58:08 by nhe               #+#    #+#             */
/*   Updated: 2022/12/02 11:47:46 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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

int	main(void)
{
	int	count;

	count = ft_str_is_alpha("A2b2");
	printf("%d\n", count);
	count = ft_str_is_alpha("hello");
	printf("%d\n", count);
	count = ft_str_is_alpha("42");
	printf("%d\n", count);
	return (0);
}
*/
