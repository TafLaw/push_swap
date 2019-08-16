/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:31:46 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/16 18:15:57 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			bsmall_to_top(t_list **top, int loc, int len)
{
	int mid;

	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len / 2) + 1;
	if (loc == 1 && len != 2)
		return ;
	else if ((*top)->data > (*top)->link->data && len == 2)
	{
		nswap(*top, 'b');
		return ;
	}
	else if (loc <= mid)
	{
		while (1 < loc--)
			rot_ab(top, 'b');
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			rrot_ab(top, 'b');
	}
}

static void		gen_2(int res1, int res2, t_list **top, t_list **b)
{
	if (res2 == 0)
		while (res1-- > 1)
			rot_ab(top, 'a');
	else
		while (res2-- >= 1)
			rrot_ab(top, 'a');
	if (empty(*b))
	{
		push_b(top, b, 'b');
		return ;
	}
	bsmall_to_top(b, loc(*b, find_min(*b)), ft_lstlen(*b));
	push_b(top, b, 'b');
}

void			generate(int res1, int res2, t_list **top, t_list **b)
{
	if (res2 > res1 || res2 == res1)
	{
		if (res1 == 0 || (res1 == 0 && res2 == 1))
			while (res2-- >= 1)
				rrot_ab(top, 'a');
		else
			while (res1-- > 1)
				rot_ab(top, 'a');
		if (empty(*b))
		{
			push_b(top, b, 'b');
			return ;
		}
		bsmall_to_top(b, loc(*b, find_min(*b)), ft_lstlen(*b));
		push_b(top, b, 'b');
	}
	else if (res2 < res1)
		gen_2(res1, res2, top, b);
}
