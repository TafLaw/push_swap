/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:01:18 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/17 10:41:31 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_sort(int argc, t_list *top)
{
	sorted(top, (argc - 1)) == 1 ? ft_putendl("\nOK") : ft_putendl("\nKO");
}

int			main(int argc, char *argv[])
{
	t_stack d;

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
		d.temp[d.j++] = ft_atoi(argv[d.i]);
		d.i++;
	}
	if (create_stack(&d.top, d.temp, argv, d.j))
	{
		while (get_next_line(0, &d.op) == 1)
			do_op(d.op, &d.top, &d.stack_b);
		print_sort(argc, d.top);
	}
	return (0);
}
