/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 09:03:38 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/20 10:41:48 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_comb2(void)
{
	int n1 = 0;
	int n2 = 1;
	
    char num1 = '0';
	char num2 = '1';

	while(n1 < 99)
	{
		while(n2 < 98)
		{
			if(n1 < n2)
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(',');
				if(num2 == 9)
				{
					num2 = num1 + 1;
				}
			}
			n2++;
			num2++;
		}
		n1++;
		num1++;
	//	num2 = num1 + 1;
	}
}

