/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbargument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:17:37 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/16 14:17:38 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	free_memory(char **arg, int *nbrs)
{
	int	i;

	i = 0;
	while (arg[i] != NULL)
	{
		free(arg[i]);
		i++;
	}
	free(arg);
	free(nbrs);
	return (0);
}

int	free_memo_arg(char **arg)
{
	int	i;

	i = 0;
	while (arg[i] != NULL)
	{
		free(arg[i]);
		i++;
	}
	free(arg);
	return (0);
}

int	ft_one_argument(int argc, char **argv)
{
	int		i;
	char	**arg;
	int		count_nb;
	int		*nbrs;

	i = 0;
	arg = ft_check_split(argc, argv);
	count_nb = ft_split_len(arg);
	nbrs = (int *)malloc((count_nb) * sizeof(long));
	if (!nbrs)
		return (free_memo_arg(arg));
	while (i < (count_nb))
	{
		if (ft_check_onearg(arg[i]) == -1)
			return (free_memory(arg, nbrs));
		if (ft_check_onearg(arg[i]) == 0)
			return (ft_error(), free_memory(arg, nbrs));
		nbrs[i] = ft_atoi(arg[i]);
		i++;
	}
	if (check_same(nbrs, count_nb) == -1)
		free_memory(arg, nbrs);
	else
		free_memory(arg, nbrs);
	return (0);
}

int	ft_more_argument(int argc, char **argv)
{
	int	i;
	int	count_nb;
	int	*nbrs;

	i = 0;
	count_nb = argc - 1;
	nbrs = (int *)malloc((count_nb) * sizeof(long));
	if (!nbrs)
		return (0);
	i = 0;
	while (i < (count_nb))
	{
		if (ft_check(argv[i + 1], nbrs) == -1)
			return (0);
		if (ft_check(argv[i + 1], nbrs) == 0)
			return (ft_error());
		nbrs[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (check_same(nbrs, count_nb) == -1)
		free(nbrs);
	else
		free(nbrs);
	return (0);
}
