/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UTILS_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:46:17 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/30 12:44:17 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min_index(t_stack *stack)
{
	t_node	*current;
	int		min_index;

	if (!stack->head)
		return (-1);
	current = stack->head;
	min_index = current->s_index;
	while (current)
	{
		if (current->s_index < min_index)
			min_index = current->s_index;
		current = current->next;
	}
	return (min_index);
}

int	count_r(t_node *stack, int idx)
{
	int	counter;

	counter = 0;
	while (stack && stack->s_index != idx)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

int	is_sorted(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->head;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	free_stack(t_stack *stack)
{
	if (!stack)
		return ;
	while (stack->head)
		pop_s(stack);
	stack->size = 0;
	stack->head = NULL;
}

void	sort(t_stack *stack_a, t_stack *stack_b, int *num, int len)
{
	if (is_sorted(stack_a))
	{
		free(num);
		free_stack(stack_a);
		error("", 1);
	}
	else if (len == 2)
		swap(stack_a, 'a', true);
	else if (len == 3)
		simple_sort(stack_a, len);
	else if (len <= 7)
		s_insertion_sort(stack_a, stack_b, len);
	else if (len > 7)
	{
		k_sort1(stack_a, stack_b, len);
		k_sort2(stack_a, stack_b, len);
	}
	else
		error("", 1);
}
