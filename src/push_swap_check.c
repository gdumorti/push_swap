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

int check_same(int *nbrs, int count_nb)
{
	int same_nb;
	int	i;
	int j;

	same_nb = 0;
	i = 0;
	while (i < count_nb)
	{	
		j = i + 1;
		while (j < count_nb)
		{
			if (nbrs[i] == nbrs[j])
			{
				same_nb += 1;
				if (same_nb == 1)
					ft_error(2);
				ft_printf("\033[43m%d\033[0m ", nbrs[i]);
			}
			j++;
		}
		i++;
	}
	if (same_nb != 0)
	{
		free(nbrs);
		ft_printf("\n");
		return (0);
	}
	else
		ft_printf("\033[38;2;0;255;0mOK\033[0m\n");
		//push_swap(nbrs);
	return (0);
}
int	main(int argc, char **argv)
{
	int *nbrs;
	int i;
	int	count_nb;

	if (argc == 1)
		return (0);
	count_nb = argc - 1;
	nbrs = (int *)malloc((count_nb) * sizeof (long));
	if(!nbrs)
		return (0);
	i = 0;
	while (i < (count_nb))
	{
		if (ft_atoi_bis(argv[i + 1]) == NULL)
		{
				ft_error(3);
				ft_printf("\033[43m%s\033[0m\n", argv[i + 1]);
				return (0);
		}
		nbrs[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	check_same(nbrs, count_nb);
	return (0);
}
 // utiliser printf a la place de ft_printf pour long
 // retirer message d'erreur perso pour "Error"