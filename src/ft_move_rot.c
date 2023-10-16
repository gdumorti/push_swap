/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:37:58 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/03 14:38:00 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate_a(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*first;

	current = *stack_a;
	first = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	while (current->next != NULL)
		current = current->next;
	(*stack_a) = first->next;
	first->next = NULL;
	current->next = first;
	ft_printf("ra\n");
}

void	ft_rotate_b(t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*first;

	current = *stack_b;
	first = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	while (current->next != NULL)
		current = current->next;
	(*stack_b) = first->next;
	first->next = NULL;
	current->next = first;
	ft_printf("rb\n");
}

void	ft_reverse_rotate_a(t_stack **stack_a)
{
	t_stack	*current;

	current = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	while (current->next->next != NULL)
		current = current->next;
	current->next->next = *stack_a;
	(*stack_a) = current->next;
	current->next = NULL;
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_stack **stack_b)
{
	t_stack	*current;

	current = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	while (current->next->next != NULL)
		current = current->next;
	current->next->next = *stack_b;
	(*stack_b) = current->next;
	current->next = NULL;
	ft_printf("rrb\n");
}
