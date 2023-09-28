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
				return (ft_error(2, nbrs[i], 0, 0));
			j++;
		}
		i++;
	}
	push_swap(nbrs, count_nb);
	return (0);
}

int	main(int argc, char **argv)
{
	int	*nbrs;
	int	i;
	int	count_nb;

	if (argc == 1)
		return (0);
	count_nb = argc - 1;
	nbrs = (int *)malloc((count_nb) * sizeof (long));
	if (!nbrs)
		return (0);
	i = 0;
	while (i < (count_nb))
	{
		if (ft_check(argv[i + 1]) == -1)
			return (0);
		if (ft_check(argv[i + 1]) == 0)
			return (ft_error(3, 0, 0, argv[i + 1]));
		nbrs[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0; //
	while (i < count_nb)
	{
		printf("Test nbrs: %d\n", nbrs[i++]);
	} //
	if (check_same(nbrs, count_nb) == -1)
		free(nbrs);
	else
		free(nbrs);
	return (0);
}

// retirer les ft_printf pour la norme

 // utiliser printf a la place de ft_printf pour long

 // retirer message d'erreur perso pour "Error"
 
 /* ./pushlibftprintf 8073405 -5850563 -7774387 5720268 8247152 -5971975 3859212 5919077 -564688 6460612 -970440 844391 -5466889 4440721 8206705 -5541828 7679763 -5069198 9249181 608759 -5231039 -8138569 961287 -8091378 6877454 -2036307 3459567 8230250 4824978 3396736 2059986 -3033730 276289 -897294 2589727 -9979484 5882931 910406 262773 -4651875 8121319 -1866473 7356343 3037139 -3174883 1981720 -6930733 4738008 -840791 5173870 -4258892 9476692 -8473638 2089549 9647706 -3940006 488665 491285 9457707 1926741 5717054 6024956 4852779 3328796 71302 6262112 2469408 6894318 4596784 -1688323 3716427 3500283 -9760894 -8187483 118471 1302046 -2893293 2345643 -5301912 9065258 1140880 5746921 4224878 -3705513 1901990 -7747062 3745460 -6017438 198262 8264780 -6904330 -5427635 -2543676 4180028 -558018 4311137 5373363 8633067 -1434707 7156892 | tee output.txt
nombre_de_lignes=$(wc -l < output.txt)
echo "Nombre de lignes affichées par push_swap : $nombre_de_lignes" */