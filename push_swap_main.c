/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:57:12 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/13 13:39:42 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int *ch = NULL;
	int			i = 1;
	int			j = 0;
	int			*temp;
	struct node *top;
	struct node *s_b = NULL;

	if (argc == 1)
		return (0);
	temp = (int *)malloc(sizeof(int) * argc);
	while (i <= argc - 1)
	{
		if (!number(argv[i]) || !max(argv[i]))
		{
			ft_putendl("Error");
			return (0);
		}
		temp[j++] = ft_atoi(argv[i++]);
	}
	i = 1;
	j = j - 1;
	while (i <= argc - 1)
	{
		top = push(temp[j--], top);
		if (!checker(argv[i++], top))
			return (0);
	}
	if (sorted(top, (argc - 1)))
		return (0);
	//if (argc <= 6)
		//sorter(&top, &s_b);
	/*if (argc > 6 && argc < 100)
	{
		i = 1;
		while (i++ <= argc - 1)
			push_smallest(&top, &s_b);
		while (i-- > 1)
			push_a(&s_b, &top, 'a');
	}*/
	//push_largest(&top, &s_b);
	//else
    //call(&top, &s_b);
	exce(&top, &s_b);
	
        printf("\033[0;32m A\n");
        trav(top);
        printf("\033[0m");
        printf("\033[0;35m B\n");
        trav(s_b);
	return (0);
}
