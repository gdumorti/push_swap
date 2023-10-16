/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:44:31 by gdumorti          #+#    #+#             */
/*   Updated: 2023/05/02 17:07:49 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_error(int x, int i, char j, char *k)
{
	if (x == 1)
		ft_printf("Error\n");
	if (x == 2)
		ft_printf("Error\n");
	if (x == 3)
		ft_printf("Error\n");
	if (x == 4)
		ft_printf("Error\n");
	if (i == 100 && j == 'c' && k == NULL)
		return (0);
	return (-1);
}

//x = 1 //ft_printf("Error, some parameters are not numbers:\n");
		//ft_printf("\033[43m%c\033[0m\n", j);

//x = 2 //ft_printf("Error, some numbers are the same:\n");
		//ft_printf("\033[43m%d\033[0m\n", i);

//x = 3 //ft_printf("Error, some parameters do not fit in an INT:\n");
		//ft_printf("\033[43m%s\033[0m\n", k);

// x = 4 //ft_printf("Error, stack is empty\n");