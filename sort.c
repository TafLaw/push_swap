/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:42:25 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/19 10:29:38 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int		sort(struct node *stack, char *s)
{
	if (ft_strcmp(s, "sa"))
		ft_swap(stack -> data, stack -> link -> data);
	return (1);
}
