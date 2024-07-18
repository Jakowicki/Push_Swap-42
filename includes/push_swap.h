/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:28:35 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/29 17:56:44 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/libft/libft.h"
# include <limits.h>
# include <stdbool.h>

# define RED "\e[0;31m"

typedef struct s_node
{
	int				data;
	int				s_index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	int				size;
}					t_stack;

// UTILS_1
void				push_s(t_stack *stack, int idx, int data);
int					pop_s(t_stack *stack);
void				free_2d(char **arr);
int					ft_sqrt(int num);
int					ck_duplicates_bf(int *num, int count);

// UTILS_2
int					get_min_index(t_stack *stack);
int					count_r(t_node *stack, int idx);
int					is_sorted(t_stack *stack);
void				free_stack(t_stack *stack);
void				sort(t_stack *stack_a, t_stack *stack_b, int *numbers,
						int len);

// INSERTION_SORT
void				insertion_sort(int arr[], int n);
int					index_of(int n, int *arr);

// MOVES
void				swap(t_stack *stack, char x, bool b);
void				push(t_stack *stack1, t_stack *stack2, char x, bool b);
void				rotate(t_stack *stack, char x, bool b);
void				reverse_rotate(t_stack *stack, char x, bool b);

// SORT
int					is_rot_sort(t_stack *stack, int min_s_index);
void				simple_sort(t_stack *stack, int len);
void				s_insertion_sort(t_stack *stack_a, t_stack *stack_b,
						int len);
void				k_sort1(t_stack *stack_a, t_stack *stack_b, int len);
void				k_sort2(t_stack *stack_a, t_stack *stack_b, int len);

// PARSE
int					ck_digits(int ac, char *av[]);
void				ck_range(char **s_num, int *num);
int					*arg_p(int ac, char *av[], int count);

// ERROR
void				error(char *message, bool b);

// PUSH_SWAP
void				mk_stack(t_stack *stack_a, t_stack *stack_b, int *nb,
						int c);
int					main(int ac, char *av[]);

#endif
