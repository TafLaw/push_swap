/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:33:31 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/15 17:01:21 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstlen(struct node *r)
{
	struct node	*temp;
	int			len;

	temp = r;
	len = 0;
	while (temp != NULL)
	{
		len++;
		temp = temp->link;
	}
	return (len);
}

int		half_mid(int len)
{
	int l;

	if (len % 2 == 0)
		l = len / 2;
	else
		l = (len / 2) + 1;
	return (l);
}
