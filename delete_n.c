/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:24:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/21 11:42:25 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_n(t_list **top)
{
	t_list *temp;
	t_list *link;

	temp = *top;
	while (temp)
	{
		link = temp->link;
		free(temp);
		temp = link;
	}
	*top = NULL;
}
