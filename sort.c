/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:42:25 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/25 13:15:39 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(struct node **stack)//Sorting only 3 numbers & working fine
{
	struct node *temp;

	temp = *stack;
	if (temp -> data > temp -> link -> data && 
			temp -> link -> data < temp -> link -> link -> data && 
			temp -> data < temp -> link -> link -> data)
		nswap(*stack);
	else if (temp -> data > temp -> link -> data &&
		  temp -> link -> data	> temp -> link -> link -> data &&
		  temp -> link -> link -> data < temp -> link -> data)
	{
		nswap(*stack);
		rrot_ab(stack);
	}
	else if (temp -> data > temp -> link -> data &&
            temp -> data > temp -> link -> link -> data && 
			temp -> link -> data < temp -> link -> link -> data)
		rot_ab(stack);
	else if (temp -> data < temp -> link -> data &&
            temp -> data < temp -> link -> link -> data &&
            temp -> link -> data > temp -> link -> link -> data)
	{
		nswap(*stack);
        rot_ab(stack);
	}
	else
		rrot_ab(stack);
}//This might change in due time

void	sort_5(struct node **stack, struct node **b)
{
	struct node *temp;
	int i;

	i = 1;
	temp = *stack;
	while (i++ <= 2)
		*b = push_b(stack, *b);
	sort_3(stack);
	*stack = push_a(b, *stack);
	rot_ab(stack);
	*stack = push_a(b, *stack);
	sort_3(stack);
	 while (i++ <= 2)
  		 *b = push_b(stack, *b);
	 sort_3(stack);
}
