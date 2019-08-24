/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:33:31 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/21 11:42:52 by tmuzeren         ###   ########.fr       */
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

int		*find_ch2(t_list *top, int a, int b)
{
	int j;
	int i;
	int new;
	int *chunk;

	j = 0;
	i = 1;
	new = 0;
	chunk = (int *)malloc(sizeof(int) * 7);
	if ((a - b) % 2 != 0)
		new += 1;
	new += (a - b) / 7;
	chunk[0] = new + b - 1;
	while (i < 6 && j < 7)
		chunk[i++] = chunk[j++] + new;
	chunk[i] = find_max(top);
	return (chunk);
}
