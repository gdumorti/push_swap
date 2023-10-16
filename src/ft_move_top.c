/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:04:08 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/02 14:04:11 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//ajouter au sommet de la stack
t_stack	*ft_push_stack(t_stack *top_stack, int index)
{
	t_stack	*newnode;

	newnode = (t_stack *)malloc(sizeof(t_stack));
	newnode->index = index;
	newnode->next = top_stack;
	return (newnode);
}

//retirer du sommet de la stack
t_stack	*ft_pull_stack(t_stack *top_stack)
{
	t_stack	*tmp;

	if (top_stack == NULL)
	{
		ft_error(4, 0, 0, NULL);
		return (top_stack);
	}
	tmp = top_stack;
	top_stack = top_stack->next;
	free(tmp);
	return (top_stack);
}

//stack_a to stack_b
void	ft_move_to_b(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a != NULL)
	{
		*stack_b = ft_push_stack(*stack_b, (*stack_a)->index);
		*stack_a = ft_pull_stack(*stack_a);
	}
	ft_printf("pb\n");
}

//stack_b to stack_a
void	ft_move_to_a(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b != NULL)
	{
		*stack_a = ft_push_stack(*stack_a, (*stack_b)->index);
		*stack_b = ft_pull_stack(*stack_b);
	}
	ft_printf("pa\n");
}
