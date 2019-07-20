/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:03:45 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/19 16:23:04 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX "2147483648"
//# define MIN -2147483648

# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"
struct node
{
	int		data;
	struct	node *link;
};
struct node *top;
void		push(char *s);
int			checker(char *s);
int			sort(struct node *stack, char *s);
void		push_swap(struct node *root);
void		swap(struct node *stack);
void		ab_swap(struct node	*stack_a, struct node *stack_b);
int			do_op(char *str, struct node *stack, struct node *stack_a
		struct node *stack_b);
void		rotate(struct node *stack);
void		ab_rotate(struct node *a, struct node *b);

#endif
