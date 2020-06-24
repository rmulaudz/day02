/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 09:36:09 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/21 10:08:07 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_combn(int n)
{
	int a = 0;
	int b = 1;
	char ch1 = '0';
	char ch2 = '1';
	while(a <= 9)
	{
		while(b <= 9)
		{
			write(1, &ch1, 1);
			write(1, &ch2, 1);
			write(1, ",", 1);
			ch2++;
			b++;
		}
		ch1++;
		a++;
	}
}

int main(void)
{
	ft_print_combn(2);
	return (0);
}

	
