/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:52:30 by gdumorti          #+#    #+#             */
/*   Updated: 2023/10/16 12:52:32 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**ft_check_split(int argc, char **argv)
{
	int		i;
	char	**arg;

	i = 0;
	arg = NULL;
	if (argc == 2)
	{
		arg = ft_split(argv[1], ' ');
		i = 0;
		while (arg[i])
			i++;
		if (i == 1)
		{
			free_memo_arg(arg);
			exit(EXIT_FAILURE);
		}
		return (arg); 
	}
	else
		return (argv);
}
