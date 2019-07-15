/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                            :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/15 13:54:52 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push(char *s)
{
	struct node *temp;
	int			data;

	data = ft_atoi(s);
	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
		return;
	temp -> link = top;
	top = temp;
}

static int duplicate(struct node *stack)
{
	struct node *temp;
	int			dup;

	dup = 0;
	while (stack)
	{
		temp = stack -> link;
		while (temp)
		{
			if (stack -> data == temp -> data)
			{
				dup++;
				return (1);
			}
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
	if (!number(s) || duplicate(top))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int num;

	num = argc - 1;
	ft_putnbr(num);
	printf("\n%s\n", argv[0]);
	return (0);
}
