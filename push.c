/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:23:05 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/23 18:22:19 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct node    *push(int dat, struct node *top)
{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> link = top;
    top = temp;
	return (top);
}

struct node		*push_b(struct node **top, struct node *stack_b)
{
	struct node *temp;
	struct node *p;
	int			dat;

	if (isEmpty(*top))
        return (stack_b);
	p = *top;
	if (p -> link == NULL)
	{
		stack_b = push(p -> data, stack_b);
		*top = NULL;
		return (stack_b);
	}
	dat = p -> data;
	temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> link = stack_b;
    stack_b = temp;
	*top = p -> link;
    return (stack_b);
}

struct node     *push_a(struct node **stack_b, struct node *top)
{
    struct node *temp;
	struct node *p;
    int         dat;

	if (isEmpty(*stack_b))
		return (top);
	p = *stack_b;
	if (p -> link == NULL)
	{
		top = push(p -> data, top);
		*stack_b = NULL;
        return (top);
	}
    dat = p -> data;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> link = top;
    top	= temp;
    *stack_b = p ->link;
    return (top);
}
