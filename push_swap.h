/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:03:45 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/21 11:45:39 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "./libft/libft.h"
# include "get_next_line.h"

typedef	struct		s_list
{
	int				data;
	struct s_list	*link;
}					t_list;
typedef struct		s_stack
{
	char			*op;
	int				j;
	int				i;
	int				w;
	int				*temp;
	t_list			*stack_b;
	t_list			*top;
}					t_stack;
int					max(char *str);
int					find_max(t_list *stack);
int					number(char *s);
int					duplicate(t_list *stack);
int					create_stack(t_list **top, int *temp, char **argv, int j);
int					sorted(t_list *stack, int len);
void				trav(t_list *top);
int					find_min(t_list *stack);
int					loc(t_list *top, int min);
void				big_to_top(t_list **top, t_list **b, int loc, int len);
void				push_largest(t_list **stack, t_list **b);
void				push_smallest(t_list **stack, t_list **b);
void				small_to_top(t_list **top, t_list **b, int loc, int len);
int					pos(t_list *a, int loc);
void				sorter(t_list **stack, t_list **b);
int					ft_lstlen(t_list *r);
void				ab_rrotate(t_list **a, t_list **b, char c);
void				rot_ab(t_list **stack, char c);
void				rrot_ab(t_list **stack, char c);
int					empty(t_list *top);
void				push_a(t_list **stack_b, t_list **top, char c);
void				push_b(t_list **top, t_list **stack_b, char c);
t_list				*push(int dat, t_list *top);
int					checker(char *s, t_list *top);
int					sort(t_list *stack, char *s);
void				push_swap(t_list *root);
void				nswap(t_list *stack, char c);
void				ab_swap(t_list	*stack_a, t_list *stack_b, char c);
void				do_op(char *ins, t_list **stack_a, t_list **stack_b);
void				rotate(t_list *stack);
void				ab_rotate(t_list **a, t_list **b, char c);
int					*find_ch(t_list *top, int a, int b);
void				results(t_list **top, t_list **b, int len, int *ch);
void				bsmall_to_top(t_list **top, int loc, int len);
void				exce(t_list **a, t_list **b);
int					half_mid(int len);
void				generate(int res1, int res2, t_list **top, t_list **b);
void				delete_n(t_list **top);
int					operations(char *ins);
int					do_push(t_list *temp, t_list *p, t_list **s_b,
		t_list **top);
int					words(char const *str, char c);
void				exce2(t_list **a, t_list **b);
int					*find_ch2(t_list *top, int a, int b);
#endif
