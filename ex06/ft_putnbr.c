/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:43:12 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/21 09:33:32 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void ft_putnbr(int nb)
{
	//char a = nb;
	//ft_putchar(a);
	printf("ok");
	
}

int main(void)
{
	ft_putnbr(4);
	return (0);
}

