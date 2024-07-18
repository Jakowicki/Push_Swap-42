/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:29:08 by mjakowic          #+#    #+#             */
/*   Updated: 2024/03/07 11:34:49 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	b;
	void	*p;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (2147483647 / nmemb < size)
		return (NULL);
	b = nmemb * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, b);
	return (p);
}

// (17) Declare 'b' to store the total number of bytes to allocate.
// (18) Declare 'p' as to store the address of the allocated memory.
// (20-24) If 'nmemb' or 'n' is 0, or overflow return NULL.
// (25) Calculate total bytes to allocate.
// (26) Allocate 'b' biter of memory nd assign to adres of 'p'.
// (27-28) If allocation fails return NULL.
// (30) If alocation was succesfull set allocated memory to 0.
// (31)	Return pointer to the allocated memory and zero-initialized memory.

/*
//#include <stdio.h>

int	main(void)
{
	int *arr = ft_calloc(3, sizeof(int));
	char *str = ft_calloc(5, sizeof(char));

	printf("arr: %p\n", arr);
	printf("str: %p\n", str);

	return (0);
}*/