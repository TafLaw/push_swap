/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:42:25 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/06 14:47:50 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		loc(struct node *top, int min)
{
	struct node *len;
	int i;

	i = 1;
	len = top;
	while (len && len->data != min)
	{
		i++;
		len = len->link;
	}
//	printf("_______>>>>>>%d<<<<<<______\n", i);
	return (i);
}

void	sort_2(struct node **stack)
{
	struct node *temp;

	temp = *stack;
	if (temp->data > temp->link->data)
		nswap(*stack, 'a');
	return ;
}

void	sort_3(struct node **stack)//Sorting only 3 numbers & working fine
{
	struct node *temp;

	temp = *stack;
	if (temp->data < temp->link->data && temp->link->data < temp->link->link->data)
		return ;
	if (temp->data > temp->link->data && 
			temp->link->data < temp->link->link->data && 
			temp->data < temp->link->link->data)
	{
		nswap(*stack, 'a');
		printf("sa\n");
	}
	else if (temp->data > temp->link->data &&
		  temp->link->data	> temp->link->link->data &&
		  temp->link->link->data < temp->link->data)
	{
		nswap(*stack, 'a');
		rrot_ab(stack, 'a');
	}
	else if (temp->data > temp->link->data &&
            temp->data > temp->link->link->data && 
			temp->link->data < temp->link->link->data)
	{
		rot_ab(stack, 'a');
	}
	else if (temp->data < temp->link->data &&
            temp->data < temp->link->link->data &&
            temp->link->data > temp->link->link->data)
	{
		nswap(*stack, 'a');
        rot_ab(stack, 'a');;
	}
	else
	{
		rrot_ab(stack, 'a');
		printf("rr\n");
	}
}//This might change in due time

/*void	sort_5(struct node **stack, struct node **b)
{
	int i;

	i = 0;
	while (i++ < 2)
		push_smallest(stack, b);
	sort_3(stack);
	while (1 < i--)
	{
		push_a(b, stack);
		printf("pa\n");
	}
}*/
void  sort_5(struct node **stack, struct node **b)
{
	int i;
	struct node *a = *stack;
	struct node *t;

    i = 0;
    while (i++ < 2)
	{
		ft_putendl("pb");
		push_b(stack, b);
	}
	sort_3(stack);
	t = *b;
	if (t->data < t->link->data)
	{
		nswap(*b, 'b');
		ft_putendl("sb");
		while (--i >= 0)
		{
			push_a(b, stack);
			ft_putendl("pa");
		}
	}
	else
	{
		while (--i >= 0)
		{
			push_a(b, stack);
			ft_putendl("pa");
		}
	}
	a = *stack;
	if (a->link->data > a->link->link->data && a->link->data > a->link->link->link->data)
	{
		ft_putendl("sa");
		nswap(*stack, 'a');
		ft_putendl("ra");
		rot_ab(stack, 'a');

		push_b(stack, b);
         push_b(stack, b);
         push_b(stack, b);
         rrot_ab(b, 'b');
         push_a(b, stack);
         push_a(b, stack);
         push_a(b, stack);
	}
}
