/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yx.he <yx.he@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:10:50 by nhe               #+#    #+#             */
/*   Updated: 2022/12/07 23:51:59 by yx.he            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
int	main(void)
{
	char src[] = "Source here.";
	char dest[] = "This is destination.";
	unsigned int	n;

	n = 15;
	printf("Before: int: %d\nsrc: %s; dest: %s\n", n, src, dest);
	ft_strncpy(dest, src, n);
	printf("After:\nsrc: %s; dest: %s\n", src, dest);
	return (0);
}
*/