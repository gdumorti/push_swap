/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:54:42 by gdumorti          #+#    #+#             */
/*   Updated: 2023/08/23 13:54:46 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	push_swap(int *nbrs, int count_nb)
{
	ft_printf("\033[38;2;0;255;0mOK\033[0m\n"); //print "OK"
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 0;
	stack_a = ft_newstack_a(i, count_nb, nbrs);
	stack_b = ft_newstack_b();
	return (0);
}
