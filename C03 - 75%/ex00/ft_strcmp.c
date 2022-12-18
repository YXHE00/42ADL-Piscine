/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:11:25 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/06 12:07:13 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_strcmp("abc", "abcd"));
	printf("\n%d", ft_strcmp("Abc", "abc"));
	printf("\n%d", ft_strcmp("abc", "123"));
	printf("\n%d", ft_strcmp("abc", "abc"));
}
*/
