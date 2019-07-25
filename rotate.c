/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:25:52 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/23 18:34:42 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void          rot_ab(struct node **stack)
{
    struct node *top;
    struct node *end;

    top = *stack;
    *stack = (*stack) -> link;
    end = top;

    if (ft_lstlen(*stack) <= 1)
		return ;
	while (end -> link != NULL)
	{
        end = end -> link;
	}
    end -> link = top;
    top -> link = NULL;
}

void           rrot_ab(struct node **stack)
{
    struct node *top;
    struct node *end;
    struct node *tmp;

    top = *stack;
    end = *stack;
    if (ft_lstlen(*stack) <= 1)
		return ;
	while (end -> link -> link != NULL)
	{
        end = end -> link;
	}
    tmp = end;
    end = end -> link;
    tmp -> link = NULL;
    end -> link = top;
    *stack = end;

}

void	ab_rotate(struct node **a, struct node **b)
{
	rot_ab(a);
	rot_ab(b);
}

void    ab_rrotate(struct node **a, struct node **b)
{
    rrot_ab(a);
    rrot_ab(b);
}
