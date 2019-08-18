/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:57:12 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/18 17:25:37 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_sorts(t_list *top, t_list *s_b, int argc)
{
	int i;

	if (sorted(top, (argc - 1)))
		return ;
	if (argc <= 6)
		sorter(&top, &s_b);
	else if (argc > 6 && argc <= 70)
	{
		i = 1;
		while (i++ <= argc - 1)
			push_smallest(&top, &s_b);
		while (i-- > 1)
			push_a(&s_b, &top, 'a');
	}
	else
		exce(&top, &s_b);
}

int			main(int argc, char **argv)
{
	t_stack	d;

	d.i = 1;
	d.j = 0;
	d.stack_b = NULL;
	if (argc == 1)
		return (0);
	d.temp = (int *)malloc(sizeof(int) * argc);
	while (d.i <= argc - 1)
	{
		if (!number(argv[d.i]) || !max(argv[d.i]))
		{
			ft_putendl("Error");
			return (0);
		}
		d.temp[d.j++] = ft_atoi(argv[d.i++]);
	}
	if (create_stack(&d.top, d.temp, argv, d.j))
		do_sorts(d.top, d.stack_b, argc);
	return (0);
}
