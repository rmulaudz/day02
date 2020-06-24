/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:48:31 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/19 17:17:34 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_alphabet(void)
{
  char letter;

  letter = 'z';
  while (letter >= 'a')
  {
    ft_putchar(letter);
    letter--;
  }
  ft_putchar('\n');
}

