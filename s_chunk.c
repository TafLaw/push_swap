/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_chunk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 16:54:00 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/16 17:02:28 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_top(int j, int *ch, int *res1, t_list **top)
{
	int	i;
	int	l;

	i = 1;
	l = half_mid(ft_lstlen(*top));
	while (i <= l)
	{
		if (pos(*top, i) >= find_min(*top) && pos(*top, i) <= ch[j])
		{
			*res1 = i;
			break ;
		}
		i++;
	}
}

static int	find_bottom(int ch, int *res2, t_list **top, int k)
{
	int	i;
	int	l;

	l = half_mid(ft_lstlen(*top));
	i = 1;
	while (k > l)
	{
		if (pos(*top, k) >= find_min(*top) && pos(*top, k) <= ch)
		{
			*res2 = i;
			break ;
		}
		k--;
		i++;
	}
	return (k);
}

void		results(t_list **top, t_list **b, int k, int *ch)
{
	int i;
	int j;
	int res;
	int res2;
	int l;

	j = -1;
	i = 1;
	res = 0;
	res2 = 0;
	l = half_mid(k);
	while (j++ < 5)
	{
		find_top(j, ch, &res, top);
		k = find_bottom(ch[j], &res2, top, k);
		if (!(res2 == 0 && res == 0))
			break ;
	}
	(ft_lstlen(*top) == 1) ? push_b(top, b, 'b') : generate(res, res2, top, b);
}

void		exce(t_list **a, t_list **b)
{
	int len;
	int *ch;
	int i;

	i = 0;
	len = ft_lstlen(*a);
	ch = find_ch(*a, find_max(*a), find_min(*a));
	while (i < len)
	{
		results(a, b, ft_lstlen(*a), ch);
		i++;
	}
	while (len-- >= 1)
		push_largest(a, b);
}
