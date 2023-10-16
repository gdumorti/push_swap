/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fastswap_extend.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:36:01 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/04 15:36:02 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sa_ra(t_stack **stack_a)
{
	ft_swap_a(stack_a);
	ft_rotate_a(stack_a);
}

void	ft_sa_rra(t_stack **stack_a)
{
	ft_swap_a(stack_a);
	ft_reverse_rotate_a(stack_a);
}
