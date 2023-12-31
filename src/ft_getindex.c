/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:29:46 by gdumorti          #+#    #+#             */
/*   Updated: 2023/09/25 14:29:48 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_getindex(int *nbrs, int value, int count_nb)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;
	while (nbrs[i] != value)
		i++;
	while (j < count_nb)
	{
		if (nbrs[j] < nbrs[i])
			index++;
		j++;
	}
	return (index);
}

int	ft_getindex_lst(t_stack **stack, int value, int count_nb)
{
	int		i;
	int		index;
	t_stack	*current;

	i = 0;
	index = 0;
	current = *stack;
	while (i < count_nb)
	{
		if (current->index < value)
			index++;
		i++;
		current = current->next;
	}
	return (index);
}
