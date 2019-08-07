/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:29:03 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/06 15:25:41 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nswap(struct node *stack, char c)
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
	c == 'a' ? ft_putendl("sa") : ft_putendl("sb");
}

/* void	small_to_top(struct node *top, int loc)
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

} */
void	small_to_top(struct node **top, struct node **b, int loc, int len)
{
	int mid;
		// printf("\n*** %d ***\n\n", loc);

	 if (len % 2 == 0)
		mid = len/2;
	else 
		mid = (len/2) + 1;

	if (loc == 1 && len != 2)
	{
		push_b(top, b);
		return ;
	}
	else if ((*top)->data > (*top)->link->data && len == 2)
	{
		nswap(*top, 'a');
		return ;
	}
	else if (loc <= mid)
	{
		while (1 < loc--)
			rot_ab(top, 'a');
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			rrot_ab(top, 'a');
	}
		/* if (loc == 2)
		nswap(*top, 'a');
		else
		{
			while (1 < loc--)
				rot_ab(top, 'a');
		} */

	push_b(top, b);
}

void	ab_swap(struct node *stack_a, struct node *stack_b)
{
	nswap(stack_a, 'a');
	nswap(stack_b, 'b');
}
