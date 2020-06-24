/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:27:16 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/19 17:18:11 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_alphabet(void) 
{
  char letter;
  
  letter = 'a';
  while (letter <= 'z') 
  {
    ft_putchar(letter);
    letter++;
  }
  ft_putchar('\n');
}

