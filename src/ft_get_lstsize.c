/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lstsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:08:45 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/10 16:08:47 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_get_lstsize(t_stack **stack)
{
	int		size;
	t_stack	*current;

	size = 0;
	current = *stack;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}

int	ft_get_distance(t_stack **stack, int index)
{
	int		distance;
	t_stack	*current;

	distance = 0;
	current = *stack;
	while (current != NULL && current->index != index)
	{
		distance++;
		current = current->next;
	}
	return (distance);
}
