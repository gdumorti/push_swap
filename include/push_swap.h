/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:28:04 by gdumorti          #+#    #+#             */
/*   Updated: 2023/08/22 13:28:06 by gdumorti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include <stdio.h>
# include "../ft_printf/libft/libft.h"
# include "../ft_printf/include/ft_printf.h"

/*définition type Booléen*/
typedef enum
{
   false,
   true
}Bool;

/*définition liste*/
typedef struct s_stack
{
    int value;
    struct s_stack* next;
}t_stack;

int		push_swap(int *nbrs);
char	*ft_atoi_bis(const char *str);
int 	ft_error(int x);


#endif