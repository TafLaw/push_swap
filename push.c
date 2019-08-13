/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:23:05 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/13 13:55:06 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct node	*push(int dat, struct node *top)
{
	struct node *temp;

	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
		return (0);
	temp->data = dat;
	temp->link = top;
	top = temp;
	return (top);
}

void		push_b(struct node **top, struct node **stack_b, char c)
{
	struct node *temp;
	struct node *p;
	int			dat;

	if (isEmpty(*top))
		return ;
	p = *top;
	if (p->link == NULL)
	{
		*stack_b = push(p->data, *stack_b);
		*top = NULL;
		return ;
	}
	dat = p->data;
	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
		return ;
	temp->data = dat;
	temp->link = *stack_b;
	*stack_b = temp;
	*top = p->link;
	if (c == 'c')
		return ;
	ft_putendl("pb");
}

void		push_a(struct node **stack_b, struct node **top, char c)
{
	struct node *temp;
	struct node *p;
	int			dat;

	if (isEmpty(*stack_b))
		return ;
	p = *stack_b;
	if (p == NULL)
	{
		*top = push(p->data, *top);
		*stack_b = NULL;
		return ;
	}
	dat = p->data;
	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
		return ;
	temp->data = dat;
	temp->link = *top;
	*top = temp;
	*stack_b = p->link;
	if (c == 'c')
		return ;
	ft_putendl("pa");
}

void		push_smallest(struct node **stack, struct node **b)
{
	int			min;
	int			location;
	struct node *a;

	a = *stack;
	location = 0;
	min = find_min(*stack);
	location = loc(*stack, min);
	small_to_top(stack, b, location, ft_lstlen(*stack));
}

void		push_largest(struct node **stack, struct node **b)
{
	int			max;
	int			location;
	struct node *a;

	a = *b;
	location = 0;
	max = find_max(*b);
	location = loc(*b, max);
	big_to_top(stack, b, location, ft_lstlen(*b));
}
