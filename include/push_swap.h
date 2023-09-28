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
    int index;
    struct s_stack* next;
}t_stack;

t_stack	    *ft_newstack_a(int i, int count_nb, int *nbrs);
t_stack     *ft_newstack_b(void);
int		    push_swap(int *nbrs, int count_nb);
int	        ft_check(const char *str);
int 	    ft_error(int x, int i, char j, char *k);
int         ft_getindex(int *nbrs, int value, int count_nb);


#endif