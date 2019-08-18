/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:45:11 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/17 10:49:32 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		max(char *str)
{
	if (ft_strlen(str) == ft_strlen("2147483647"))
	{
		if (ft_strcmp(str, "2147483647") > 0)
		{
			free(str);
			return (0);
		}
	}
	else if (ft_strlen(str) > ft_strlen("2147483647"))
	{
		free(str);
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
			{
				free(stack);
				return (1);
			}
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
		free(s);
		free(top);
		ft_putendl("Error");
		return (0);
	}
	return (1);
}
