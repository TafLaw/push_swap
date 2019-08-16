/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 11:00:00 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/15 17:20:43 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		sorted(struct node *stack, int len)
{
	struct node *temp;

	temp = stack;
	while (temp->link != NULL)
	{
		if (temp->data > temp->link->data)
			return (0);
		temp = temp->link;
	}
	if (ft_lstlen(stack) == len)
		return (1);
	return (0);
}
