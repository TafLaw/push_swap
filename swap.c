/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:29:03 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/15 17:38:46 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nswap(t_list *stack, char c)
{
	int *a;
	int *b;
	int temp;

	if (stack == NULL)
		return ;
	a = &stack->data;
	if (stack->link == NULL)
		return ;
	b = &stack->link->data;
	temp = *a;
	*a = *b;
	*b = temp;
	if (c == 'c')
		return ;
	c == 'a' ? ft_putendl("sa") : ft_putendl("sb");
}

void	small_to_top(t_list **top, t_list **b, int loc, int len)
{
	int mid;

	mid = half_mid(len);
	if (loc == 1 && len != 2)
	{
		push_b(top, b, 'b');
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
	push_b(top, b, 'b');
}

void	ab_swap(t_list *stack_a, t_list *stack_b, char c)
{
	nswap(stack_a, c);
	nswap(stack_b, c);
}

void	big_to_top(t_list **top, t_list **b, int loc, int len)
{
	int mid;

	if (!*b && !*top)
		return ;
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len / 2) + 1;
	if (loc == 1 && len != 2)
		return ;
	else if (*b == NULL)
		return ;
	else if (loc <= mid)
	{
		while (1 < loc--)
			rot_ab(b, 'b');
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			rrot_ab(b, 'b');
	}
}
