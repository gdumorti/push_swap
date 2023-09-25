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

int push_swap(int *nbrs)
{
	t_stack* head = NULL;
	int	i;

	i = 0;
	while (nbrs[i])
	{
		t_stack* newNode = (t_stack*)malloc(sizeof(t_stack));
		if (!newNode)
			return (0);
		newNode->value = nbrs[i++];
		newNode->next = NULL;
		if (head == NULL)
			head = newNode;
		else
		{
			t_stack* current = head;
			while (current->next != NULL)
                current = current->next;
			current->next = newNode;
		}
	}
	/* test afficher contenu liste */
	t_stack* current = head;
    while (current != NULL)
	{
        ft_printf("Argument : %d\n", current->value);
        current = current->next;
    }
	ft_printf("\n\033[38;2;255;155;254m");
	return (0);
}
