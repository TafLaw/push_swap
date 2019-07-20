/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:35:50 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/19 11:05:40 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*stack(struct node *st)
{
	int 	*sta = (int *)malloc(sizeof(int));
	int		i;
	struct node *temp;

	i = 0;
	temp = top;
	while (i < 6 && temp -> link != NULL)
	{
		sta[i] = temp -> data;
		temp = temp -> link;
		i++;
	}
	return (sta);
}

int	main(void)
{
	int *list = stack(top);
	int i = 0;

	while (i < 6)
	{
		printf("%d |", list[i]);
		i++;
	}
	printf("\n");
	return (0);
}
