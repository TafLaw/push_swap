/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:46:52 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/19 12:44:32 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		comp(char *op, char *s)
{
	size_t i;

	i = 0;
	while (i < ft_strlen(s) && s[i] == op[i])
		i++;
	if (i == ft_strlen(s))
		return (1);
	return (0);
}

int				operations(char *ins)
{
	if (comp(ins, "sa"))
		return (1);
	else if (comp(ins, "sb"))
		return (1);
	else if (comp(ins, "ss"))
		return (1);
	else if (comp(ins, "pa"))
		return (1);
	else if (comp(ins, "pb"))
		return (1);
	else if (comp(ins, "ra"))
		return (1);
	else if (comp(ins, "rb"))
		return (1);
	else if (comp(ins, "rr"))
		return (1);
	else if (comp(ins, "rra"))
		return (1);
	else if (comp(ins, "rrb"))
		return (1);
	else if (comp(ins, "rrr"))
		return (1);
	return (0);
}
