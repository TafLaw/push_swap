/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:50:18 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/05 12:51:58 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_op(char *ins, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strcmp(ins, "sa"))
		nswap(*stack_a, 'c');
	else if (!ft_strcmp(ins, "sb"))
		nswap(*stack_b, 'c');
	else if (!ft_strcmp(ins, "ss"))
		ab_swap(*stack_a, *stack_b, 'c');
	else if (!ft_strcmp(ins, "pa"))
		push_a(stack_b, stack_a, 'c');
	else if (!ft_strcmp(ins, "pb"))
		push_b(stack_a, stack_b, 'c');
	else if (!ft_strcmp(ins, "ra"))
		rot_ab(stack_a, 'c');
	else if (!ft_strcmp(ins, "rb"))
		rot_ab(stack_b, 'c');
	else if (!ft_strcmp(ins, "rr"))
		ab_rotate(stack_a, stack_b, 'c');
	else if (!ft_strcmp(ins, "rra"))
		rrot_ab(stack_a, 'c');
	else if (!ft_strcmp(ins, "rrb"))
		rrot_ab(stack_b, 'c');
	else if (!ft_strcmp(ins, "rrr"))
		ab_rrotate(stack_a, stack_b, 'c');
}
