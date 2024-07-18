/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:20:53 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/30 11:13:35 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		count;
	int		*num;

	if (ac == 1)
		error("", 1);
	count = ck_digits(ac, av);
	num = arg_p(ac, av, count);
	if (count <= 1 || ck_duplicates_bf(num, count))
	{
		free(num);
		if (count == 1)
			error("", 1);
		error(RED "Error\n", 1);
	}
	mk_stack(&stack_a, &stack_b, num, count);
	sort(&stack_a, &stack_b, num, count);
	free(num);
	free_stack(&stack_a);
	return (0);
}

void	mk_stack(t_stack *stack_a, t_stack *stack_b, int *nb, int c)
{
	int		i;
	t_node	*tmp;

	stack_b->head = NULL;
	stack_a->head = NULL;
	stack_b->size = 0;
	stack_a->size = 0;
	i = c - 1;
	while (i >= 0)
	{
		push_s(stack_a, 0, nb[i]);
		i--;
	}
	insertion_sort(nb, c);
	tmp = stack_a->head;
	while (tmp)
	{
		tmp->s_index = index_of(tmp->data, nb);
		tmp = tmp->next;
	}
}
