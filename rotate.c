/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:25:52 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/19 16:23:18 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(struct node *stack)
{
	int	len;
	struct node *temp;
	struct node *temp2;

	len = 0;
	temp2 = stack;
	while (temp2)
	{
		len++;
		temp2 = temp2 -> link;
	}
	temp  = stack -> data;
	stack -> data = temp2 -> data;
	temp2 -> data = temp;
}

void	ab_rotate(struct node *a, struct node *b)
{
	rotate(a);
	rotate(b);
}
