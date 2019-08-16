/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_loc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:03:41 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/16 18:09:56 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_min(t_list *stack)
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

int		find_max(t_list *stack)
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

int		loc(t_list *top, int min)
{
	t_list		*len;
	int			i;

	i = 1;
	len = top;
	while (len && len->data != min)
	{
		i++;
		len = len->link;
	}
	return (i);
}

int		pos(t_list *a, int loc)
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

int		*find_ch(t_list *top, int a, int b)
{
	int j;
	int i;
	int new;
	int *chunk;

	j = 0;
	i = 1;
	new = 0;
	chunk = (int *)malloc(sizeof(int) * 5);
	if ((a - b) % 2 != 0)
		new += 1;
	new += (a - b) / 5;
	chunk[0] = new + b - 1;
	while (i < 4 && j < 5)
		chunk[i++] = chunk[j++] + new;
	chunk[i] = find_max(top);
	return (chunk);
}
