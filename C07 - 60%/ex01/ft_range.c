/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:19:39 by nhe               #+#    #+#             */
/*   Updated: 2022/12/14 17:21:01 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*table;
	int	count;

	if (min >= max)
		return (NULL);
	table = malloc (sizeof(int) * (max - min));
	if (table == NULL)
	{
		return (NULL);
	}
	else
	{
		count = 0;
		while (max > min)
		{
			table[count] = min;
			min++;
			count++;
		}
		return (table);
	}
}

/*
#include<unistd.h>

int main(void)
{
	int	*ptr;
	int	i;

	ptr = ft_range('A', 'Z');
	i = 0;
	while (i < 26)
		write(1, &ptr[i++], 1);
	return (0);
}
*/