/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:17:11 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/18 17:19:09 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		do_push(t_list *temp, t_list *p, t_list **s_b, t_list **top)
{
	int dat;

	dat = p->data;
	if (temp == NULL)
	{
		free(p);
		return (0);
	}
	temp->data = dat;
	temp->link = *top;
	*top = temp;
	*s_b = p->link;
	return (1);
}
