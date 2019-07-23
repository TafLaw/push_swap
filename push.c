/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:23:05 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/23 13:17:33 by tmuzeren         ###   ########.fr       */
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

struct node		*push_b(struct node *top, struct node *stack_b)
{
	struct node *temp;
	int			dat;

	if (top)
		return (stack_b);
	dat = top -> data;
	temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> link = stack_b;
    stack_b = temp;
	*top = *top -> link;
	//delete_n();
    return (stack_b);
}

struct node     *push_a(struct node *stack_b, struct node *top)
{
    struct node *temp;
    int         dat;

	if (stack_a)
        return (top);
    dat = stack_b -> data;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return (0);
    temp -> data = dat;
    temp -> link = top;
    top	= temp;
    *stack_b = *stack_b -> link;
	//delete_n();
    return (top);
}
