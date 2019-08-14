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
		// printf("\033[0;31mCH = %d\n\033[0m", ch[j]);
		while (i <= l)
        {	/* printf("\033[0;32m pos[%d]	-> %d\n\033[0m", i, pos(*top, i)); */
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
			// printf("\033[0;35m pos[%d]	-> %d\n\033[0m", k, pos(*top, k));
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
/* 	printf("\033[0;53mres1 = %d		res2 = %d\n", res1, res2);
 */	if (res2 > res1 || res2 == res1)//seperate function
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
	/* printf("Stack A\n");

		trav(*top); */
	push_b(top, b, 'b');
	/* printf("\033[0;33m Stack B\n\033[0m");
	trav(*b); */
}

void	call(struct node **a, struct node **b)
{
	int len;
	int *ch;
	int i;

	int j;
	// int x;
	int con;

	i = 0;
	len = ft_lstlen(*a);
	ch = range(*a, find_max(*a), find_min(*a));
	printf("\n\n___________CHUNK == %d____________\n\n", ch[i]);
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

	/* printf("\n\n.......STACK A.......\n\n");
	trav(*a);
	printf("\n\n.......STACK B.......\n\n");
	trav(*b) */;
	len = ft_lstlen(*b);
	while (len > 0)
	{
		push_largest(a, b);
		/* while (pos(*a, 1) > pos(*a, i))
			i++;
		if (pos(*a, 1) < pos(*a, i))
			while (i-- > 0)
			{
				nswap(*a, 'a');
				while (pos(*a, 2) < pos(*a, 3))
				{
					rrot_ab(a, 'a');
					nswap(*a, 'a');
				}
				rot_ab(a, 'a');
			} */
			j = 1;
			con = 0;
		//	x = ft_lstlen(*a);
		if (pos(*a, j) > pos(*a, j + 1))
		{
			while (pos(*a, j) > pos(*a, j + 1))
			{
				nswap(*a, 'a');
				if (pos(*a, j + 1) > pos(*a, j + 2))
					rot_ab(a, 'a');
					con++;
			}
			while (con-- > 1)
				rrot_ab(a, 'a');
		}
		//if (pos(*a, 2) < pos(*a, 1))
			//nswap(*a, 'a');
		len--;
	}
}
