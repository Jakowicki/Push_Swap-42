/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:59:39 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/29 16:23:30 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error(char *message, bool b)
{
	write(2, message, ft_strlen(message));
	if (b == true)
		exit(EXIT_FAILURE);
}
