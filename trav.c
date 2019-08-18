/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trav.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:43:49 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/17 10:49:35 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	trav(t_list *top)
{
	t_list *temp;

	if (top == NULL)
		ft_putendl("EMPTY");
	else
	{
		temp = top;
		while (temp != NULL)
		{
			ft_putnbr(temp->data);
			ft_putstr(" -> ");
			temp = temp->link;
		}
		ft_putendl("NULL");
	}
}
