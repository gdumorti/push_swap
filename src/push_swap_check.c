/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:26:05 by gdumorti          #+#    #+#             */
/*   Updated: 2023/08/22 13:26:09 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_same(int *nbrs, int count_nb)
{
	int	same_nb;
	int	i;
	int	j;

	same_nb = 0;
	i = 0;
	while (i < count_nb)
	{
		j = i + 1;
		while (j < count_nb)
		{
			if (nbrs[i] == nbrs[j])
				return (ft_error());
			j++;
		}
		i++;
	}
	push_swap(nbrs, count_nb);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc == 2)
		ft_one_argument(argc, argv);
	else
		ft_more_argument(argc, argv);
	return (0);
}
