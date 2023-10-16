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

int	ft_isordered(int *nbrs, int count_nb)
{
	int	i;

	i = 0;
	while (i < count_nb - 1)
	{
		if (nbrs[i] < nbrs[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}

int	push_swap(int *nbrs, int count_nb)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*temp;

	i = 0;
	stack_a = ft_newstack_a(i, count_nb, nbrs);
	stack_b = ft_newstack_b();
	if (ft_isordered(nbrs, count_nb) == 1)
	{
		if (count_nb == 1)
			return (0);
		if (count_nb <= 5)
			ft_fastswap(&stack_a, &stack_b, nbrs, count_nb);
	}
	if (count_nb > 5)
		ft_radix(&stack_a, &stack_b, 0);
	while (stack_a != NULL)
	{
		temp = stack_a;
		stack_a = stack_a->next;
		free(temp);
	}
	return (0);
}

/*t_stack	*tmp_b1 = stack_b;
	ft_printf("\n\n\033[34m---------stack_b (first mouv)--------\033[0m\n");
	while (tmp_b1 != NULL)
	{
        ft_printf("Index : %d\n", tmp_b1->index);
        tmp_b1 = tmp_b1->next;
    }
	ft_printf("\033[34m---------stack_a (first mouv)--------\033[0m\n");
	t_stack	*tmp_a1 = stack_a;
	while (tmp_a1 != NULL) 
	{
        ft_printf("Index : %d\n", tmp_a1->index);
        tmp_a1 = tmp_a1->next;
    }
    printf("\n");*/
/*t_stack	*tmp_b = stack_b;
	ft_printf("\n\n\033[34m---------stack_b (first mouv)--------\033[0m\n");
	while (tmp_b != NULL)
	{
        ft_printf("Index : %d\n", tmp_b->index);
        tmp_b = tmp_b->next;
    }
	ft_printf("\033[34m---------stack_a (first mouv)--------\033[0m\n");
	t_stack	*tmp_a = stack_a;
	while (tmp_a != NULL) 
	{
        ft_printf("Index : %d\n", tmp_a->index);
        tmp_a = tmp_a->next;
    }
    ft_printf("\n");*/