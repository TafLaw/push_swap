/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                            :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/15 17:13:15 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	trav()
{
	struct node *temp;
	if (top == NULL)
		ft_putendl("EMPTY");
	else
	{
		temp = top;
		while (temp != NULL)
		{
			printf("%d -> ", temp -> data);
			temp = temp -> link;
		}
	}
}

void	push(char *s)
{
	struct node *temp;
	int			dat;

	dat = ft_atoi(s);
	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
		return;
	temp -> data = dat;
	temp -> link = top;
	top = temp;
}

static int duplicate(struct node *stack)
{
	struct node *temp;

	while (stack)
	{
		temp = stack -> link;
		while (temp)
		{
			if (stack -> data == temp -> data)
				return (1);
			temp = temp -> link;
		}
		stack = stack -> link;
	}
	return (0);
}

static int number(char *s)
{
	int 			i;
	unsigned int 	num;

	i = 0;
	num = 0;
	if (s[i] == '-')
		num++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num++;
		i++;
	}
	if (num == ft_strlen(s))
		return (1);
	return (0);
}

int			checker(char *s)
{
	if (!number(s) || duplicate(top) || !ft_strcmp(s, MAX))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int num;
	int	i;

	i = 1;
	num = argc - 1;
	while (i <= num)
	{
		push(argv[i]);
		if (!checker(argv[i]))
			return (0);
		i++;
	}
	trav();
	return (0);
}
