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

void	bsmall_to_top(struct node **top, struct node **b, int loc, int len)
{
	int mid;

	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len / 2) + 1;
	if (loc == 1 && len != 2)
	{
		push_b(top, b, 'b');
		return ;
	}
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

int     *find_ch(struct node *top, int a, int b)
{
    int j;
    int i = 1;
    int new = 0;
    int *chunk = (int *)malloc(sizeof(int) * 5);

    j = 0;
    if ((a - b) % 2 != 0)
        new += 1;
    new += (a - b) / 5;
    chunk[0] = new + b - 1;
    while (i < 4 && j < 5)
       chunk[i++] = chunk[j++] + new;
    chunk[i] = find_max(top);
    return (chunk);
}

void    results(struct node **top, struct node **b, int len, int *ch)
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
	while (j < 5)
	{
		i = 1;
		//printf("\033[0;31mCH = %d\n\033[0m", ch[j]);
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
    //printf("r1 = %d     r2 = %d\n", res1, res2);
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
       bsmall_to_top(b, top, loc(*b, find_min(*b)), ft_lstlen(*b));
       push_b(top, b, 'b');
    }
    else if (res2 < res1)
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
        bsmall_to_top(b, top, loc(*b, find_min(*b)), ft_lstlen(*b));
        push_b(top, b, 'b');
	} 
   //trav(*top)
}

void	exce(struct node **a, struct node **b)
{
    int len;
	int *ch;
	int i;

	i = 0;
	len = ft_lstlen(*a);
	ch = find_ch(*a, find_max(*a), find_min(*a));
	while (i < len)
    {
		results(a, b, len, ch);
        i++;
    }
    while (len-- >= 1)
        push_largest(a, b);
}