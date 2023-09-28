/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:15:39 by gdumorti          #+#    #+#             */
/*   Updated: 2023/09/28 15:15:42 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print_stack(t_stack *current, t_stack *head)
{
	current = head;
	while (current != NULL)
	{
		ft_printf("Argument : %d	---->	Index : %d\n", \
		current->value, current->index);
		//ft_printf("----------------------\n");
		current = current->next;
	}
}

t_stack	*ft_newstack_a(int i, int count_nb, int *nbrs)
{
	t_stack	*head;
	t_stack	*current;
	t_stack	*stack_a;

	head = NULL;
	while (i < count_nb)
	{
		stack_a = (t_stack *)malloc(sizeof(t_stack));
		if (!stack_a)
			return (0);
		stack_a->index = ft_getindex(nbrs, nbrs[i], count_nb);
		stack_a->value = nbrs[i++];
		stack_a->next = NULL;
		if (head == NULL)
			head = stack_a;
		else
		{
			current = head;
			while (current->next != NULL)
				current = current->next;
			current->next = stack_a;
		}
	}
	ft_print_stack(current, head);
	return (stack_a);
}

/*------------------------------------------------*/

t_stack	*ft_newstack_b(void)
{
	t_stack	*head;
	t_stack	*current;
	t_stack	*stack_b;

	head = NULL;
	current = NULL;
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_b)
		return (0);
	stack_b->next = NULL;
	/*if (head == NULL)
		head = stack_b;
	else
	{
		current = head;
		while (current->next != NULL)
  	          current = current->next;
		current->next = stack_b;
	}*/
	ft_print_stack(current, head);
	return (stack_b);
}
