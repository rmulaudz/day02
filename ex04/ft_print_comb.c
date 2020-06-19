/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:15:44 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/19 17:14:57 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb(void)
{
    int num1 = 0;
	int num2 = 1;
	int num3 = 2;
    
    char n1 = '0';
	char n2 = '1';
	char n3 = '2';

	while(num1 < 9)
	{
		while(num2 < 8)
		{
			while(num3 < 7)
			{
				if(num1 < num2 && num2 < num3)
				{
					ft_putchar(n1);
					ft_putchar(n2);
					ft_putchar(n3);
                    ft_putchar(',');
				}
				n3++;
				num3++;
			}
			n2++;
			num2++;
		}
		n1++;
		num1++;
	}
}

