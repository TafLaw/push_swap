/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:03:45 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/13 16:23:13 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX "2147483648"
# define MIN "-2147483648"

# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"
# include "get_next_line.h"
struct node
{
	int		data;
	struct	node *link;
};

int max(char *str);
int     *range(struct node *top, int big, int small);
int     find_max(struct node *stack);
int number(char *s);
int duplicate(struct node *stack);
void    create_temp(int **temp, int len, char **argv);
int sorted(struct node *stack, int len);
void    trav(struct node *top);
int		find_min(struct node *stack);
int		loc(struct node *top, int min);
void    call(struct node **a, struct node **b);
void	big_to_top(struct node **top, struct node **b, int loc, int len);
void		push_largest(struct node **stack, struct node **b);
void	push_smallest(struct node **stack, struct node **b);
void        small_to_top(struct node **top, struct node **b, int loc, int len);
int     pos(struct node *a, int loc);
void	sorter(struct node **stack, struct node **b);
void    half_sort(struct node **top, struct node **b, int len, int *ch);
int     ft_lstlen(struct node *r);
void    ab_rrotate(struct node **a, struct node **b, char c);
void          rot_ab(struct node **stack, char c);
void           rrot_ab(struct node **stack, char c);
int			isEmpty(struct node *top);
void		delete_n(struct node *top);
void	push_a(struct node **stack_b, struct node **top, char c);
void	push_b(struct node **top, struct node **stack_b, char c);
void		pop(struct node **top);
int				*reverse_stack(int ar, struct node *stack);
struct node		*push(int dat, struct node *top);
int			checker(char *s, struct node *top);
int			sort(struct node *stack, char *s);
void		push_swap(struct node *root);
void		nswap(struct node *stack, char c);
void		ab_swap(struct node	*stack_a, struct node *stack_b, char c);
void			do_op(char *ins, struct node **stack_a,
		struct node **stack_b);
void		rotate(struct node *stack);
void		ab_rotate(struct node **a, struct node **b, char c);

#endif
