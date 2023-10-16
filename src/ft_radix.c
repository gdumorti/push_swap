/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:01:23 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/10 14:01:25 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_isordered_lst(t_stack *stack)
{
	t_stack	*current;

	if (stack == NULL || stack->next == NULL)
		return (0);
	current = stack;
	while (current->next != NULL)
	{
		if (current->index > current->next->index)
			return (1);
		current = current->next;
	}
	return (0);
}

void	ft_radix(t_stack **stack_a, t_stack **stack_b, unsigned int bit)
{
	int				size;
	t_stack			*element;

	bit = 0;
	while (ft_isordered_lst(*stack_a) == 1 && bit < (sizeof(int) * 8))
	{
		size = ft_get_lstsize(stack_a);
		while (size > 0)
		{
			element = *stack_a;
			if (!((element->index >> bit) & 1))
				ft_move_to_b(stack_a, stack_b);
			else
				ft_rotate_a(stack_a);
			size--;
		}
		size = ft_get_lstsize(stack_b);
		while (size > 0)
		{
			ft_move_to_a(stack_a, stack_b);
			size--;
		}
		bit++;
	}
	return ;
}
