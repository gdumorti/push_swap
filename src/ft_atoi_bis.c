/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:44:31 by gdumorti          #+#    #+#             */
/*   Updated: 2023/05/02 17:07:49 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long atoi_check(const char *str, int i, long b, int a)
{
	while (str[i] >= 48 && str[i] <= 57)
	{
		b = b * 10 + str[i++] - 48;
		if (b < 0 && a == 1)
			return (-1);
		if (b < 0 && a == -1)
			return (0);
	}
	if (str[i] != '\0')
	{
		ft_error(1);
		ft_printf("\033[43m%c\033[0m\n", str[i]);
		return (0);
	}
	return (b);
}
char	*ft_atoi_bis(const char *str)
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
		b = atoi_check(str, i, b, a);
		if (b == 0)
			return (NULL);
		if (b > INT_MAX || b < INT_MIN)
			return (NULL);
		return ("OK");
	}
	return (NULL);
}