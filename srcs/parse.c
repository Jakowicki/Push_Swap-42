/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:54:48 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/29 16:22:50 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ck_digits(int ac, char *av[])
{
	int	i;
	int	j;
	int	count;

	i = 1;
	count = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != ' '
				&& av[i][j] != '-')
				return (-1);
			if (ft_isdigit(av[i][j]) && (av[i][j + 1] == ' ' || av[i][j
					+ 1] == '\0'))
				count += 1;
			j++;
		}
		i++;
	}
	return (count);
}

void	ck_range(char **s_num, int *num)
{
	int	i;

	i = 0;
	while (s_num[i])
	{
		if (ft_atol(s_num[i]) > INT_MAX || ft_atol(s_num[i]) < INT_MIN
			|| ft_strlen(s_num[i]) > 11)
		{
			free_2d(s_num);
			free(num);
			error(RED "Error", 1);
		}
		i++;
	}
}

int	*arg_p(int ac, char *av[], int count)
{
	char	**s_num;
	int		*num;
	int		i;
	int		j;
	int		k;

	num = (int *)malloc(sizeof(int) * count);
	if (!num)
		return (NULL);
	i = 0;
	j = 0;
	while (++i < ac)
	{
		s_num = ft_split(av[i], ' ');
		if (!s_num)
			error("", 1);
		ck_range(s_num, num);
		k = 0;
		while (s_num[k])
			num[j++] = ft_atoi(s_num[k++]);
		free_2d(s_num);
	}
	return (num);
}
