/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:56:49 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/19 17:16:57 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_numbers(void)
{
  char num = '0';

  while (num <= '9')
  {
    ft_putchar(num);
	num++;
  }
  ft_putchar('\n');
}

