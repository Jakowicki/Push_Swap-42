/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:10:14 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/29 16:23:57 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	insertion_sort(int arr[], int n)
{
	int	elm;
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		elm = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > elm)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = elm;
		i++;
	}
}

int	index_of(int n, int *arr)
{
	int	i;

	i = 0;
	while (arr[i] != n)
		i++;
	return (i);
}
