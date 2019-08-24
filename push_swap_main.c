/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:57:12 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/23 13:28:10 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**split_n(int *argc, char **argv, int *i)
{
	*argc = words(argv[1], ' ') + 1;
	argv = ft_strsplit(argv[1], ' ');
	*i = 0;
	return (argv);
}

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
	else if (argc > 70 && argc <= 200)
		exce(&top, &s_b);
	else
		exce2(&top, &s_b);
}

int			main(int argc, char **argv)
{
	t_stack	d;

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
		if (!number(argv[d.i]) || !max(argv[d.i]))
		{
			ft_putendl("Error");
			return (0);
		}
		d.temp[d.j++] = ft_atoi(argv[d.i++]);
	}
	if (create_stack(&d.top, d.temp, argv, d.j))
		do_sorts(d.top, d.stack_b, d.w);
	return (0);
}
