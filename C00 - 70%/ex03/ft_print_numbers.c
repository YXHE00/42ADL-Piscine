/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:16 by nhe               #+#    #+#             */
/*   Updated: 2022/11/29 12:55:29 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	mynum;

	mynum = '0';
	while (mynum <= '9')
	{
		ft_putchar(mynum);
		mynum++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
