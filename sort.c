/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:42:25 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/18 17:22:13 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_list **stack)
{
	t_list *temp;

	temp = *stack;
	if (temp->data > temp->link->data)
		nswap(*stack, 'a');
	return ;
}

static void	sort_3(t_list **stack)
{
	t_list *t;

	t = *stack;
	if (pos(t, 1) < pos(t, 2) && pos(t, 2) < pos(t, 3))
		return ;
	if (pos(t, 1) > pos(t, 2) && pos(t, 2) < pos(t, 3) && pos(t, 1) < pos(t, 3))
		nswap(*stack, 'a');
	else if (pos(t, 1) > pos(t, 2) && pos(t, 2) > pos(t, 3))
	{
		nswap(*stack, 'a');
		rrot_ab(stack, 'a');
	}
	else if (pos(t, 1) > pos(t, 2) && pos(t, 1) > pos(t, 3) &&
	pos(t, 2) < pos(t, 3))
	{
		rot_ab(stack, 'a');
	}
	else if (pos(t, 1) < pos(t, 2) && pos(t, 1) < pos(t, 3) &&
	pos(t, 2) > pos(t, 3))
	{
		nswap(*stack, 'a');
		rot_ab(stack, 'a');
	}
	else
		rrot_ab(stack, 'a');
}

static void	sort_4(t_list **stack, t_list **b)
{
	int location;
	int min;

	min = find_min(*stack);
	location = loc(*stack, min);
	if (location == 1 && ft_lstlen(*stack) > 2)
		push_b(stack, b, 'b');
	else
		push_smallest(stack, b);
	sort_3(stack);
	push_a(b, stack, 'a');
}

static void	sort_5(t_list **stack, t_list **b)
{
	int i;

	i = 0;
	while (i++ < 2)
		push_smallest(stack, b);
	sort_3(stack);
	while (1 < i--)
		push_a(b, stack, 'a');
}

void		sorter(t_list **stack, t_list **b)
{
	int len;

	len = ft_lstlen(*stack);
	if (len == 1)
		return ;
	else if (len == 2)
		sort_2(stack);
	else if (len == 3)
		sort_3(stack);
	else if (len == 4)
		sort_4(stack, b);
	else if (len == 5)
		sort_5(stack, b);
}
