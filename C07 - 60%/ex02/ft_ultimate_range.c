/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:13:40 by nhe               #+#    #+#             */
/*   Updated: 2022/12/14 17:20:45 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*table;
	int		count;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	table = (int *)malloc(sizeof(*table) * (max - min));
	if (table == NULL)
		return (-1);
	else
	{
		count = -1;
		while (++count < max - min)
		{
			table[count] = min + count;
		}
		*range = table;
		return (count);
	}
}
/*
#include<unistd.h>
int main()
{
	int	*tmp = NULL;
	int	**range = &tmp;
	int	*ptr = NULL;
	int i;
	int n;

	n = ft_ultimate_range(range, 'A', 'Z');
	i = 0;
	ptr = *range;
	while (i < n)
	{
		write(1, &ptr[i], 1);
		write(1, " ", 1);
		i++;
	}
	return (0);
}
*/