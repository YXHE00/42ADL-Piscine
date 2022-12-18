/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:28:18 by yx.he             #+#    #+#             */
/*   Updated: 2022/12/06 11:41:32 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int main(void)
{
    char lowercase[] = "abcdef";
    char mixcase[] = "1234Abcdef";
    char *struplowercase;
    char *strupmixcase;

    struplowercase = lowercase;
    strupmixcase = mixcase;
    printf("%s\n", ft_strupcase(struplowercase));
    printf("%s\n", ft_strupcase(strupmixcase));
}
*/
