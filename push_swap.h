/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:03:45 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/30 13:57:40 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX "2147483648"
# define MIN "-2147483648"

# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"
struct node
{
	int		data;
	struct	node *link;
};
//struct node *top;
int		loc(struct node *top, int min);
void	push_smallest(struct node **stack, struct node **b);
void        small_to_top(struct node *top, int loc);
void	sort_5(struct node **stack, struct node **b);
void	sort_3(struct node **stack);
int     ft_lstlen(struct node *r);
void    ab_rrotate(struct node **a, struct node **b);
void          rot_ab(struct node **stack);
void           rrot_ab(struct node **stack);
int			isEmpty(struct node *top);
void		delete_n(struct node *top);
struct node     *push_a(struct node **stack_b, struct node *top);
struct node		*push_b(struct node **top, struct node *stack_b);
void		pop(struct node **top);
int				*reverse_stack(int ar, struct node *stack);
struct node		*push(int dat, struct node *top);
int			checker(char *s, struct node *top);
int			sort(struct node *stack, char *s);
void		push_swap(struct node *root);
void		nswap(struct node *stack);
void		ab_swap(struct node	*stack_a, struct node *stack_b);
int			do_op(char *str, struct node *stack, struct node *stack_a,
		struct node *stack_b);
void		rotate(struct node *stack);
void		ab_rotate(struct node **a, struct node **b);

#endif
