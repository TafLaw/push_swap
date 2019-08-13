/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                            :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/08 14:31:23 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//This function is for display testing
void	trav(struct node *top)
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
		printf("NULL\n");
	}
}

int max(char *str)
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

int duplicate(struct node *stack)
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

int number(char *s)
{
	int 		i;
	unsigned int 	num;

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
//Currently on reserve until further notice
/*int			checker(char *s, struct node *top)
  {
  if (s[0] != '-' && (!ft_strcmp(s, MAX) || ft_strlen(s) > ft_strlen(MAX)))
  return (0);
  else if (s[0] == '-' && (s[10] < '8' || ft_strlen(s) > ft_strlen(MIN)))
  return (0);
  else if (s[9] > '7' || s[8] > '4' || !number(s) || duplicate(top) || !ft_strcmp(s, MAX))
  return (0);
  return (1);
  }*/
int			checker(char *s, struct node *top)
{ 
	if (!number(s) || duplicate(top)) //|| !ft_strcmp(s, MAX) ||
			//(ft_strlen(s) > ft_strlen(MAX)))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}
