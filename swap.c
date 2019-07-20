/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:29:03 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/19 14:49:12 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(struct node *stack)
{
	struct node *a;
	struct node *b;
	struct node *temp;

	a = stack -> data;
	stack = stack -> link;
	b = stack -> data;
	temp = a;
	a = b;
	b = temp;
}

void	ab_swap(struct node *stack_a, struct node *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
