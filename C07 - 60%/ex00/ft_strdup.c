/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:25:35 by nhe               #+#    #+#             */
/*   Updated: 2022/12/14 17:19:50 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		count;

	count = 0;
	while (*(src + count))
	{
		count++;
	}
	dest = malloc(sizeof(src) * count);
	count = 0;
	if (dest == NULL)
	{
		return (0);
	}
	else
	{
		while (*(src + count))
		{
			*(dest + count) = *(src + count);
			count++;
		}
		*(dest + count) = '\0';
		return (dest);
	}
}
/*
#include<stdio.h>
int main()
{
	char *src = "42 is fun!";
	printf("the src is: %s\n", src);
	printf("the copy is: %s\n", ft_strdup(src));
}
*/