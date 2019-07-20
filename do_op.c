/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:50:18 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/19 16:01:37 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

int		do_op(char *str, struct node *stack, struct node *stack_a
		struct node *stack_b)
{
	if (ft_strcmp(str, "sa"))
		swap(stack_a);
	else if (ft_strcmp(ins, "sb"))
		swap(stack_b);
	else if (ft_strcmp(ins, "ss"))
		ab_swap(stack_a, stack_b);	
	else if (ft_strcmp(ins, "pa"))
        push_a(stack_a, stack_b);
	else if (ft_strcmp(ins, "pb"))
        push_b(stack_a, stack_b);
	else if (ft_strcmp(ins, "ra"))
        rotate(stack);
	else if (ft_strcmp(ins, "rb"))
        rotate(stack);
	else if (ft_strcmp(ins, "rr"))
        ab_rotate(stack_a, stack_b);
	else if (ft_strcmp(ins, "rra"))
        rotate(stack);
	else if (ft_strcmp(ins, "rrb"))
        rotate(stack);
	else if (ft_strcmp(ins, "rrr"))
        ab_rotate(stack_a, stack_b);
	return (1);
}
