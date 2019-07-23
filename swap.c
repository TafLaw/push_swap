/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:29:03 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/23 11:09:35 by tmuzeren         ###   ########.fr       */
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

void	ab_swap(struct node *stack_a, struct node *stack_b)
{
	nswap(stack_a);
	nswap(stack_b);
}
