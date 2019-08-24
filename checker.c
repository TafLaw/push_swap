/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:45:11 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/21 11:57:28 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long int		ft_atol(const char *str)
{
	long int	i;
	int			sign;
	long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == ' '
			|| str[i] == '\f' || str[i] == '\v' || str[i] == '\b')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((res * 10) + (str[i] - '0'));
		i++;
	}
	return (res * sign);
}

int					max(char *str)
{
	long int	n;

	n = ft_atol(str);
	if (n < -2147483648 || n > 2147483647)
		return (0);
	if (ft_strlen(str) == ft_strlen("2147483647"))
	{
		if (ft_strcmp(str, "2147483647") > 0)
			return (0);
	}
	return (1);
}

int					duplicate(t_list *stack)
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

int					number(char *s)
{
	int				i;
	unsigned int	num;

	i = 0;
	num = 0;
	if (s[i] == '-' || s[i] == '+')
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

int					checker(char *s, t_list *top)
{
	if (!number(s) || duplicate(top))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}
