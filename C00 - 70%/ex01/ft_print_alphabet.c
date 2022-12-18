/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:16:20 by nhe               #+#    #+#             */
/*   Updated: 2022/11/29 12:28:45 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	mychar;

	mychar = 'a';
	while (mychar <= 'z')
	{
		ft_putchar(mychar);
		mychar ++;
	}
}
/*
int	main(){
	ft_print_alphabet();
	return 0;
}
*/
