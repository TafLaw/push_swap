/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:01:18 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/09 10:01:07 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int       main(int argc, char *argv[])
{
    char *op;
    int j;
    int i;
    int *temp;
    struct node *top;
    struct node *stack_b;

    i = 1;
    j = 0;
    stack_b = NULL; //initialise the helper stack
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
        temp[j] = ft_atoi(argv[i]);
        i++;
        j++;
    }
	i = 1;
    j = j - 1;
    while (i <= argc - 1)
    {
        top = push(temp[j], top);
        if (!checker(argv[i], top))
            return (0);
        i++;
        j--;
    }
	while (get_next_line(0, &op) == 1)
        do_op(op, &top, &stack_b);
	sorted(top, (argc - 1)) == 1 ? ft_putendl("\nOK") : ft_putendl("\nKO");
	trav(top);
}
