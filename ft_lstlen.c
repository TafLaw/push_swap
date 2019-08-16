/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:33:31 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/16 17:58:26 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstlen(t_list *r)
{
	t_list		*temp;
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
