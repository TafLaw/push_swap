/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:42:25 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/25 12:15:45 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(struct node **stack)
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
}
