/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:45:11 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/15 17:48:59 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//This function is for display testing

void	trav(t_list *top)
{
	t_list *temp;

	if (top == NULL)
		ft_putendl("EMPTY");
	else
	{
		temp = top;
		while (temp != NULL)
		{
			printf("%d -> ", temp->data);
			temp = temp->link;
		}
		printf("NULL\n");
	}
}

int		max(char *str)
{
	if (ft_strlen(str) == ft_strlen("2147483647"))
	{
		if (ft_strcmp(str, "2147483647") > 0)
			return (0);
	}
	else if (ft_strlen(str) > ft_strlen("2147483647"))
	{
		return (0);
	}
	return (1);
}

int		duplicate(t_list *stack)
{
	t_list *temp;

	while (stack)
	{
		temp = stack->link;
		while (temp)
		{
			if (stack->data == temp->data)
				return (1);
			temp = temp->link;
		}
		stack = stack->link;
	}
	return (0);
}

int		number(char *s)
{
	int				i;
	unsigned int	num;

	i = 0;
	num = 0;
	if (s[i] == '-')
	{
		num++;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num++;
		i++;
	}
	if (num == ft_strlen(s))
		return (1);
	return (0);
}

int		checker(char *s, t_list *top)
{
	if (!number(s) || duplicate(top))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}
