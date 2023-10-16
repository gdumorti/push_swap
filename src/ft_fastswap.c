/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fastswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:04:33 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/03 14:04:35 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_ord_2arg(t_stack **stack_a, int count_nb)
{
	t_stack	*current;

	current = *stack_a;
	if (count_nb == 2 && current->index > current->next->index)
		ft_swap_a(stack_a);
	return ;
}

void	ft_ord_3arg(t_stack **stack_a, int count_nb)
{
	t_stack	*current;
	int		i;
	int		j;
	int		k;

	current = *stack_a;
	i = ft_getindex_lst(&current, current->index, 3);
	j = ft_getindex_lst(&current, current->next->index, 3);
	k = ft_getindex_lst(&current, current->next->next->index, 3);
	if (count_nb == 3)
	{
		if (i == 0 && j == 1)
			return ;
		if (i == 0 && j == 2)
			ft_sa_ra(stack_a);
		if (j == 2 && k == 0)
			ft_reverse_rotate_a(stack_a);
		if (j == 0 && k == 2)
			ft_swap_a(stack_a);
		if (i == 2 && k == 0)
			ft_sa_rra(stack_a);
		if (i == 2 && j == 0)
			ft_rotate_a(stack_a);
	}
	return ;
}

void	ft_ord_4arg(t_stack **stack_a, t_stack **stack_b, int nb, int count_nb)
{
	t_stack	*current;
	int		distance;

	current = *stack_a;
	if (count_nb == 4)
		nb = 0;
	else if (count_nb == 5)
		nb = 1;
	distance = ft_get_distance(&current, nb);
	if (distance == 1)
		ft_swap_a(stack_a);
	else if (distance == 2)
	{
		ft_rotate_a(stack_a);
		ft_swap_a(stack_a);
	}
	else if (distance == 3)
		ft_reverse_rotate_a(stack_a);
	else if (distance > 3)
		return ;
	ft_move_to_b(stack_a, stack_b);
	ft_ord_3arg(stack_a, 3);
	ft_move_to_a(stack_a, stack_b);
}

void	ft_ord_5arg(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;
	int		distance;

	current = *stack_a;
	distance = ft_get_distance(&current, 0);
	if (distance == 1)
		ft_swap_a(stack_a);
	else if (distance == 2)
	{
		ft_rotate_a(stack_a);
		ft_swap_a(stack_a);
	}
	else if (distance == 3)
	{
		ft_reverse_rotate_a(stack_a);
		ft_reverse_rotate_a(stack_a);
	}
	else if (distance == 4)
		ft_reverse_rotate_a(stack_a);
	ft_move_to_b(stack_a, stack_b);
	ft_ord_4arg(stack_a, stack_b, 1, 5);
	ft_move_to_a(stack_a, stack_b);
}

void	ft_fastswap(t_stack **s_a, t_stack **s_b, int *nbrs, int count_nb)
{
	int	index;
	int	nb;

	index = 0;
	nb = 0;
	if (ft_isordered(nbrs, count_nb) == 0)
		return ;
	if (count_nb == 2)
		ft_ord_2arg(s_a, count_nb);
	if (count_nb == 3)
		ft_ord_3arg(s_a, count_nb);
	if (count_nb == 4)
		ft_ord_4arg(s_a, s_b, nb, count_nb);
	if (count_nb == 5)
		ft_ord_5arg(s_a, s_b);
	return ;
}
