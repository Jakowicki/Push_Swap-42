/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:51:06 by mjakowic          #+#    #+#             */
/*   Updated: 2024/03/06 14:52:27 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

/*
#include <stdio.h>

int ft_toupper(int c);

int main() {
  char character = 'b'; // Example lowercase character

  int uppercase_char = ft_toupper(character);

  printf("Original character: %c\n", character);
  printf("Converted character: %c\n", uppercase_char);

  return 0;
}
*/