/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 14:36:26 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/13 14:32:46 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	half_sort(struct node **top, struct node **b, int len, int *ch)
{
	int i, j = 0;
	int res1;
	int res2;
	int l;
	int k = ft_lstlen(*top);

	i = 1;
	res1 = 0;
	res2 = 0;
	if (len % 2 == 0)
		l = len / 2;
	else
		l = (len / 2) + 1;
	while (j < 4)
	{
		i = 1;
		while (i <= l)
        {
			if (pos(*top, i) >= find_min(*top) && pos(*top, i) <= ch[j])
			{
				res1 = i;
				break ;
			}
            i++;
        }
		i = 1;
		while (k > l)
		{
			if (pos(*top, k) >= find_min(*top) && pos(*top, k) <= ch[j])
			{
				res2 = i;
				break ;
			}
            k--;
			i++;
		}
		if (res2 == 0 && res1 == 0)
			j++;
		else
			break ;
	}
	if (res2 > res1 || res2 == res1)//seperate function
	{
		if (res1 == 0 || (res1 == 0 && res2 == 1))
			while (res2 >= 1)
            {
				rrot_ab(top, 'a');
                res2--;
            }
		else
			while (res1 > 1)
            {
				rot_ab(top, 'a');
                res1--;
            }
	}
	else if (res2 < res1)
	{
		if (res2 == 0)
			while (res1 > 1)
            {
				rot_ab(top, 'a');
                res1--;
            }
		else
			while (res2 >= 1)
            {
				rrot_ab(top, 'a');
                res2--;
            }
	}
	push_b(top, b, 'b');
}

void	call(struct node **a, struct node **b)
{
	int len;
	int *ch;
	int i;

	i = 0;
	len = ft_lstlen(*a);
	ch = range(*a, find_max(*a), find_min(*a));
	while (i < len / 2)
    {
		half_sort(a, b, len, ch);
        i++;
    }
	len = ft_lstlen(*a);
	while (len >= 2)
    {
		push_smallest(a, b);
        len--;
    }
	len = ft_lstlen(*b);
	i = 0;
	while (i < len / 2)
    {
		push_a(b, a, 'a');
        i++;
    }
	len = ft_lstlen(*b);
	while (len > 0)
	{
		push_largest(a, b);
		if (pos(*a, 2) < pos(*a, 1))
			nswap(*a, 'a');
		len--;
	}
}
