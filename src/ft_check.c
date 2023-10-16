/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:44:31 by gdumorti          #+#    #+#             */
/*   Updated: 2023/05/02 17:07:49 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	atol_check(const char *str, int i, long b, int a)
{
	while (str[i] >= 48 && str[i] <= 57)
	{
		b = b * 10 + str[i++] - 48;
		if (b < 0 && a == 1)
			return (-1);
		if (b < 0 && a == -1)
			return (-1);
	}
	if (str[i] != '\0')
		return (ft_error(1, 0, str[i], 0));
	return (b);
}

//meme que ft_check_onearg mais avec int *nbrs pour pouvoir le free
int	ft_check(const char *str, int *nbrs)
{
	int		i;
	int		a;
	long	b;

	i = 0;
	b = 0;
	a = 1;
	if (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-' || str[i] == '+')
			if (str[i++] == '-')
				a = -1;
		b = atol_check(str, i, b, a);
		if (b == -1)
			return (free(nbrs), -1);
		b = b * a;
		if (b > INT_MAX || b < INT_MIN)
			return (free(nbrs), 0);
		return (1);
	}
	return (0);
}

int	ft_check_onearg(const char *str)
{
	int		i;
	int		a;
	long	b;

	i = 0;
	b = 0;
	a = 1;
	if (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-' || str[i] == '+')
			if (str[i++] == '-')
				a = -1;
		b = atol_check(str, i, b, a);
		if (b == -1)
			return (-1);
		b = b * a;
		if (b > INT_MAX || b < INT_MIN)
			return (0);
		return (1);
	}
	return (-2);
}
