/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:44:31 by gdumorti          #+#    #+#             */
/*   Updated: 2023/05/02 17:07:49 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_error(int x)
{
	if (x == 1)
		ft_printf("Error, some parameters are not numbers:\n");
	if (x == 2)
		ft_printf("Error, some numbers are the same:\n");
	if (x == 3)
		ft_printf("Error, some parameters do not fit in an INT:\n");
	return (0);
}