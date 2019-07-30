/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:29:03 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/30 13:34:47 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nswap(struct node *stack)
{
	int *a;
	int *b;
	int temp;

	a = &stack -> data;
	if (stack -> link == NULL)
		return;
	b = &stack -> link -> data;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	small_to_top(struct node *top, int loc)
{
	int temp;
	int *a;
	int *b;

	a = &top->data;
	while (1 < loc--)
		top = top->link;
	b = &top->data;
	temp = *a;
	*a = *b;
	*b = temp;

}

void	ab_swap(struct node *stack_a, struct node *stack_b)
{
	nswap(stack_a);
	nswap(stack_b);
}
