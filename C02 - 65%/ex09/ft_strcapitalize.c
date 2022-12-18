/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:22:29 by nhe               #+#    #+#             */
/*   Updated: 2022/12/07 15:47:57 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_change_uppercase(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		a -= 32;
	}
	return (a);
}

char	ft_change_lowercase(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		a += 32;
	}
	return (a);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] -= 'a' - 'A';
	i = 1;
	while (str[i])
	{
		if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A'))
		{
			str[i] = ft_change_uppercase(str[i]);
		}
		else if (str[i - 1] > 'z' || (str[i - 1] > 'Z' && str[i - 1] < 'a'))
		{
			str[i] = ft_change_uppercase(str[i]);
		}
		else
		{
			str[i] = ft_change_lowercase(str[i]);
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(a);
	printf("%s\n", a);
}
*/