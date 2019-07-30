/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:42:25 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/30 14:23:08 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		loc(struct node *top, int min)
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
void	sort_3(struct node **stack)//Sorting only 3 numbers & working fine
{
	struct node *temp;

	temp = *stack;
	if (temp->data < temp->link->data && temp->link->data < temp->link->link->data)
		return ;
	if (temp->data > temp->link->data && 
			temp->link->data < temp->link->link->data && 
			temp->data < temp->link->link->data)
	{
		nswap(*stack);
		printf("sa\n");
	}
	else if (temp->data > temp->link->data &&
		  temp->link->data	> temp->link->link->data &&
		  temp->link->link->data < temp->link->data)
	{
		nswap(*stack);
		rrot_ab(stack);
		printf("sa\nrra\n");
	}
	else if (temp->data > temp->link->data &&
            temp->data > temp->link->link->data && 
			temp->link->data < temp->link->link->data)
	{
		rot_ab(stack);
		printf("ra\n");
	}
	else if (temp->data < temp->link->data &&
            temp->data < temp->link->link->data &&
            temp->link->data > temp->link->link->data)
	{
		nswap(*stack);
        rot_ab(stack);
		printf("sa\nra\n");
	}
	else
	{
		rrot_ab(stack);
		printf("rr\n");
	}
}//This might change in due time

void	sort_5(struct node **stack, struct node **b)
{
	int i;

	i = 0;
	while (i++ < 2)
		push_smallest(stack, b);
	sort_3(stack);
	while (0 <= i--)
	{
		*stack = push_a(b, *stack);
		printf("pa\n");
	}
}
