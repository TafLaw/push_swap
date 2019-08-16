/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:25:52 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/15 17:17:45 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot_ab(struct node **stack, char c)
{
	struct node *top;
	struct node *end;

	if (*stack == NULL)
		return ;
	top = *stack;
	*stack = (*stack)->link;
	end = top;
	if (ft_lstlen(*stack) <= 1)
		return ;
	while (end->link != NULL)
	{
		end = end->link;
	}
	end->link = top;
	top->link = NULL;
	if (c == 'c')
		return ;
	c == 'a' ? ft_putendl("ra") : ft_putendl("rb");
}

void	rrot_ab(struct node **stack, char c)
{
	struct node *top;
	struct node *end;
	struct node *tmp;

	if (*stack == NULL)
		return ;
	top = *stack;
	end = *stack;
	if (ft_lstlen(*stack) <= 1)
		return ;
	while (end->link->link != NULL)
	{
		end = end->link;
	}
	tmp = end;
	end = end->link;
	tmp->link = NULL;
	end->link = top;
	*stack = end;
	if (c == 'c')
		return ;
	c == 'a' ? ft_putendl("rra") : ft_putendl("rrb");
}

void	ab_rotate(struct node **a, struct node **b, char c)
{
	rot_ab(a, c);
	rot_ab(b, c);
}

void	ab_rrotate(struct node **a, struct node **b, char c)
{
	rrot_ab(a, c);
	rrot_ab(b, c);
}
