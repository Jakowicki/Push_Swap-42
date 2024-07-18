/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UTILS_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:32:37 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/29 16:23:37 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_s(t_stack *stack, int idx, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return ;
	new_node->data = data;
	new_node->s_index = idx;
	new_node->next = stack->head;
	stack->head = new_node;
	stack->size++;
}

int	pop_s(t_stack *stack)
{
	t_node	*top;
	int		data;

	if (!stack || !stack->head)
		return (-1);
	top = stack->head;
	data = top->data;
	stack->head = top->next;
	free(top);
	stack->size--;
	return (data);
}

void	free_2d(char **arr)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (arr && arr[i])
		{
			if (arr[i] != NULL)
			{
				free(arr[i]);
				arr[i] = NULL;
			}
			i++;
		}
		free(arr);
		arr = NULL;
	}
}

int	ft_sqrt(int num)
{
	int	i;

	if (num < 4)
		return (1);
	i = 2;
	while (i * i < num)
		i++;
	if (i * i > num)
	{
		if ((i * i - num) < ((i - 1) * (i - 1) + (-num)))
			return (i);
	}
	return (i - 1);
}

int	ck_duplicates_bf(int *num, int count)
{
	int		i;
	int		j;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (num[i] == num[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
