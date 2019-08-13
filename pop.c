/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:32:11 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/23 12:01:18 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		pop(struct node *top)
{
	struct node *temp;

	if (top == NULL)
		return;
	else
	{
		temp = top;
		top = top -> link;
		temp -> link = NULL;
		free(temp);
	}
}
