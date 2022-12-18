/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:00:02 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/06 11:38:38 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int main(void)
{
    char uppercase[] = "ABCDE";
    char *strupper;

    strupper = uppercase;
    printf("%s\n", ft_strlowcase(strupper));
}
*/
