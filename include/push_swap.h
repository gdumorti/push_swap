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
# include "../ft_printf/include/ft_printf.h"
# include "../ft_printf/libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

/*définition liste*/
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack				*ft_newstack_a(int i, int count_nb, int *nbrs);
t_stack				*ft_newstack_b(void);
int					push_swap(int *nbrs, int count_nb);
int					ft_check(const char *str, int *nbrs);
int					ft_check_onearg(const char *str);
int					ft_error(void);
int					ft_getindex(int *nbrs, int value, int count_nb);
t_stack				*ft_push_stack(t_stack *top_stack, int index);
t_stack				*ft_pull_stack(t_stack *top_stack);
void				ft_move_to_b(t_stack **stack_a, t_stack **stack_b);
void				ft_move_to_a(t_stack **stack_a, t_stack **stack_b);
void				ft_fastswap(t_stack **stack_a, t_stack **stack_b, \
int *nbrs, int count_nb);
void				ft_rotate_a(t_stack **stack_a);
void				ft_rotate_b(t_stack **stack_b);
int					ft_isordered(int *nbrs, int count_nb);
void				ft_reverse_rotate_a(t_stack **stack_a);
void				ft_reverse_rotate_b(t_stack **stack_b);
void				ft_swap_a(t_stack **stack_a);
void				ft_swap_b(t_stack **stack_b);
void				ft_sa_ra(t_stack **stack_a);
void				ft_sa_rra(t_stack **stack_a);
void				ft_radix(t_stack **stack_a, t_stack **stack_b, \
unsigned int bit);
int					ft_get_lstsize(t_stack **stack_a);
int					ft_isordered_lst(t_stack *stack);
int					ft_get_distance(t_stack **stack, int index);
void				ft_ord_2arg(t_stack **stack_a, int count_nb);
void				ft_ord_3arg(t_stack **stack_a, int count_nb);
void				ft_ord_4arg(t_stack **stack_a, t_stack **stack_b, \
int nb, int count_nb);
void				ft_ord_5arg(t_stack **stack_a, t_stack **stack_b);
int					ft_getindex_lst(t_stack **stack, int value, int count_nb);
char				**ft_check_split(int argc, char **argv);
int					ft_split_len(char **arg);
int					ft_one_argument(int argc, char **argv);
int					ft_more_argument(int argc, char **argv);
int					check_same(int *nbrs, int count_nb);
int					free_memo_arg(char **arg);
int					free_memory(char **arg, int *nbrs);

#endif