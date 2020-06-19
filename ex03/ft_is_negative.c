/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:26:24 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/19 17:16:16 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
	return (0);
}

void ft_is_negative(int n)
{
    if(n < 0)
		ft_putchar('N');
	else if(n >= 0)
		ft_putchar('P');
    
	ft_putchar('\n');
}
}
