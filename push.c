/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:23:05 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/06 15:16:43 by tmuzeren         ###   ########.fr       */
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
	ft_putendl("pb");
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
	ft_putendl("pa");
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
	//printf("\033[0;32m");
	//trav(*stack);
	  //  printf("\033[0m");
    while (a->link)
    {
        if (min > a->link->data)
           min = a->link->data;
        a = a->link;
    }
	//printf("%d\n\n", min, location);
	location = loc(*stack, min);
	   //printf("%d			%d\n\n", min, location);
	small_to_top(stack, b, location, ft_lstlen(*stack));
	//push_b(stack, b);
}
