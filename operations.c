/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:46:52 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/19 17:36:35 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				operations(char *ins)
{
	if (!ft_strcmp(ins, "sa"))
		return (1);
	else if (!ft_strcmp(ins, "sb"))
		return (1);
	else if (!ft_strcmp(ins, "ss"))
		return (1);
	else if (!ft_strcmp(ins, "pa"))
		return (1);
	else if (!ft_strcmp(ins, "pb"))
		return (1);
	else if (!ft_strcmp(ins, "ra"))
		return (1);
	else if (!ft_strcmp(ins, "rb"))
		return (1);
	else if (!ft_strcmp(ins, "rr"))
		return (1);
	else if (!ft_strcmp(ins, "rra"))
		return (1);
	else if (!ft_strcmp(ins, "rrb"))
		return (1);
	else if (!ft_strcmp(ins, "rrr"))
		return (1);
	return (0);
}
