/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:53:16 by nhe               #+#    #+#             */
/*   Updated: 2022/12/01 11:09:31 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main(void)
{
	char src[20] = "Hello 42";
	char dest[20];

	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
*/
