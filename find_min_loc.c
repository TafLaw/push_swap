/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_loc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:10:30 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/08 12:53:51 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_min(struct node *stack)
{
	int	min;

	min = stack->data;
    while (stack->link)
    {
        if (min > stack->link->data)
           min = stack->link->data;
        stack = stack->link;
    }
	return (min);
}

int     find_max(struct node *stack)
{
	int	max;

	max = stack->data;
    while (stack->link)
    {
        if (max < stack->link->data)
           max = stack->link->data;
        stack = stack->link;
    }
	return (max);
}

int     loc(struct node *top, int min)
{
    struct node *len;
    int i;

    i = 1;
    len = top;
    while (len && len->data != min)
    {
        i++;
        len = len->link;
    }
    return (i);
}

int		pos(struct node *a, int loc)
{
	int i;
	int	value;

	i = 0;
	value = 0;
	while (a && i++ < loc)
	{
		value = a->data;
		a = a->link;
	}
	return (value);
}

int     *range(struct node *top, int big, int small)
{
    int j;
    int i = 1;
    int new = 0;
    int *chunk = (int *)malloc(sizeof(int) * 4);

    j = 0;
    if ((big - small) % 2 != 0)
        new += 1;
    new += (big - small) / 4;
    chunk[0] = new + small;
    while (i < 3 && j < 4)
       chunk[i++] = chunk[j++] + new;
    chunk[i] = find_max(top);
    return (chunk);

}