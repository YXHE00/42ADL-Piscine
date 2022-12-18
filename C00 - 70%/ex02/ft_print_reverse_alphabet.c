/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:59:14 by nhe               #+#    #+#             */
/*   Updated: 2022/11/29 17:08:51 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	mychar;

	mychar = 'z';
	while (mychar >= 'a')
	{
		ft_putchar(mychar);
		mychar--;
	}
}
/*
int	main(void){
	ft_print_reverse_alphabet();
	return (0);
}
*/
