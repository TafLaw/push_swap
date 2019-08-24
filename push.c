/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:23:05 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/18 17:16:17 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*push(int dat, t_list *top)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == NULL)
		return (0);
	temp->data = dat;
	temp->link = top;
	top = temp;
	return (top);
}

void	push_b(t_list **top, t_list **stack_b, char c)
{
	t_list		*temp;
	t_list		*p;

	if (empty(*top))
		return ;
	p = *top;
	if (p == NULL)
	{
		*stack_b = push(p->data, *stack_b);
		*top = NULL;
		free(p);
		return ;
	}
	temp = (t_list *)malloc(sizeof(t_list));
	if (!do_push(temp, p, top, stack_b))
		return ;
	if (c == 'c')
	{
		free(p);
		return ;
	}
	free(p);
	ft_putendl("pb");
}

void	push_a(t_list **stack_b, t_list **top, char c)
{
	t_list		*temp;
	t_list		*p;

	if (empty(*stack_b))
		return ;
	p = *stack_b;
	if (p == NULL)
	{
		*top = push(p->data, *top);
		*stack_b = NULL;
		free(p);
		return ;
	}
	temp = (t_list *)malloc(sizeof(t_list));
	if (!do_push(temp, p, stack_b, top))
		return ;
	if (c == 'c')
	{
		free(p);
		return ;
	}
	free(p);
	delete_n(top);
	ft_putendl("pa");
}

void	push_smallest(t_list **stack, t_list **b)
{
	int			min;
	int			location;
	t_list		*a;

	a = *stack;
	location = 0;
	min = find_min(*stack);
	location = loc(*stack, min);
	small_to_top(stack, b, location, ft_lstlen(*stack));
}

void	push_largest(t_list **stack, t_list **b)
{
	int			max;
	int			location;
	t_list		*a;

	a = *b;
	location = 0;
	max = find_max(*b);
	location = loc(*b, max);
	big_to_top(stack, b, location, ft_lstlen(*b));
	push_a(b, stack, 'a');
}
