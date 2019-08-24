/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:01:18 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/23 13:27:21 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	t_mp(char *argv)
{
	if (!number(argv) || !max(argv))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}

static char	**split_n(int *argc, char **argv, int *i)
{
	*argc = words(argv[1], ' ') + 1;
	argv = ft_strsplit(argv[1], ' ');
	*i = 0;
	return (argv);
}

static void	print_sort(int argc, t_list *top)
{
	sorted(top, (argc - 1)) == 1 ? ft_putendl("OK") : ft_putendl("KO");
}

static int	get_ops(t_list **top, t_list **stack_b, int argc)
{
	char *op;

	while (get_next_line(0, &op) == 1)
	{
		if (operations(op) == 0)
		{
			ft_putendl("Error");
			return (0);
		}
		do_op(op, top, stack_b);
	}
	print_sort(argc, *top);
	return (1);
}
#include <stdio.h>
int			main(int argc, char *argv[])
{
	t_stack d;

	d.i = 1;
	d.j = 0;
	d.stack_b = NULL;
	if (argc == 1)
		return (0);
	if (argc == 2)
		argv = split_n(&argc, argv, &d.i);
	d.w = argc;
	d.temp = (int *)malloc(sizeof(int) * argc);
	while (d.i <= argc - 1)
	{
		if (d.i == 0)
			argc--;
		if (!t_mp(argv[d.i]))
			return (0);
		d.temp[d.j++] = ft_atoi(argv[d.i]);
		d.i++;
	}
	if (create_stack(&d.top, d.temp, argv, d.j))
		if (!get_ops(&d.top, &d.stack_b, d.w))
			return (0);
	return (0);
}
