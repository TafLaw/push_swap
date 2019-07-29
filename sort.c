/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:42:25 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/29 18:28:16 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int find_smallest(struct node *stack)
{
	int	min;

	min = stack->data;
	while (stack)
	{
		if (stack->data > stack->link->data)
		   min = stack->link->data;
		stack = stack->link;	
	}
	return (min);
}
void	sort_3(struct node **stack)//Sorting only 3 numbers & working fine
{
	struct node *temp;

	temp = *stack;
	if (temp->data > temp->link->data && 
			temp->link->data < temp->link->link->data && 
			temp->data < temp->link->link->data)
		nswap(*stack);
	else if (temp->data > temp->link->data &&
		  temp->link->data	> temp->link->link->data &&
		  temp->link->link->data < temp->link->data)
	{
		nswap(*stack);
		rrot_ab(stack);
	}
	else if (temp->data > temp->link->data &&
            temp->data > temp->link->link->data && 
			temp->link->data < temp->link->link->data)
		rot_ab(stack);
	else if (temp->data < temp->link->data &&
            temp->data < temp->link->link->data &&
            temp->link->data > temp->link->link->data)
	{
		nswap(*stack);
        rot_ab(stack);
	}
	else
		rrot_ab(stack);
}//This might change in due time

void	sort_5(struct node **stack, struct node **b)
{
	int *s1;
	int *s2;
	struct node *temp;

	temp = *stack;
	*s1 = find_smallest(*stack);
	stack_b = push_b(stack, stack_b);
	*s2 = find_smallest(*stack);
	stack_b = push_b(stack, stack_b);
}
