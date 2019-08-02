/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:23:05 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/02 13:17:28 by tmuzeren         ###   ########.fr       */
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

void		push_b(struct node **top, struct node **stack_b)
{
	struct node *temp;
	struct node *p;
	int			dat;

	if (isEmpty(*top))
		return ;
	p = *top;
	if (p -> link == NULL)
	{
		*stack_b = push(p -> data, *stack_b);
		*top = NULL;
		return ;
	}
	dat = p -> data;
	temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return ;
    temp -> data = dat;
    temp -> link = *stack_b;
    *stack_b = temp;
	*top = p -> link;
}

void	push_a(struct node **stack_b, struct node **top)
{
    struct node *temp;
	struct node *p;
    int         dat;

	if (isEmpty(*stack_b))
		return ;
	p = *stack_b;
	if (p -> link == NULL)
	{
		*top = push(p -> data, *top);
		*stack_b = NULL;
        return ;
	}
    dat = p -> data;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return ;
    temp -> data = dat;
    temp -> link = *top;
    *top	= temp;
    *stack_b = p ->link;
}
//WORK HERE
void		push_smallest(struct node **stack, struct node **b)
{
	int min;
	int location;
	struct node *a;

	a = *stack;
	location = 0;
    min = a->data;
    while (a->link)
    {
        if (min > a->link->data)
           min = a->link->data;
        a = a->link;
    }
	location = loc(*stack, min);
	small_to_top(*stack, location);
	push_b(stack, b);
	printf("pb\n");
}
