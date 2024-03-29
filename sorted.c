/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 11:00:00 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/18 17:23:45 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		sorted(t_list *stack, int len)
{
	t_list *temp;

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
