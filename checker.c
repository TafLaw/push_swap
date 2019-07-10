/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/10 11:12:17 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		length(struct node *r)
{
	struct node *temp;
	int		len;

	temp = r;
	len = 0;
	while (temp != NULL)
	{
		len++;
		temp = temp -> link;
	}
	return (len);
}

int		duplicate(int *arr)
{
	int i;
	int j;
	int dup;

	i = 0;
	dup = 0;
	j=0;
	while (i < 7)
	{
		//j = i + 1;
		while (j + 1 < 7)
		{
			if (arr[i] == arr[i+1])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	checker(struct node *r)
{
	int			i;
	struct node	*temp;
	
	temp = r;

	i = 0;
	//j = 0;
	if (!temp)
		return;
	while (i < length(temp))
	{
		if (ft_isdigit(temp -> data) || duplicate((int *)temp) || 
				temp -> data > MAX)
		{
			printf("Error\n");
			return;
		}
		temp = temp -> link;
		i++;
	}
	/*while (1)
	{
		if 
		if (!(arr[i] % 2) || !(arr[i] % 3) || arr[i])
			i++;
	}
	while (j < i)
	{
		if (arr[i])
	//}*/
}

void append()
{
	struct node *p;
	struct node *temp;

	temp = (struct node *)malloc(sizeof(struct node));
	scanf("%d", &temp -> data);
	temp -> link = NULL;

	if (root ==	NULL)
		root = temp;
	else
	{	
		p = root;
		while (p -> link != NULL)
		{
			p = p -> link;
		}
		p -> link = temp;
	}
}

void display()
{
	struct node *temp;
	
	temp = root;
	if (temp == NULL)
		printf ("ZERO\n");
	else
	{
		while (temp != NULL)
		{
			printf("%d -> ", temp -> data);
			temp = temp -> link;
		}
		printf("NULL\n");
	}
}

int		main(void)
{
	int choice;

	while (1)
	{
		printf("\nchoice : ");
		scanf("%d", &choice);

		if (choice == 1)
			append();
		else if (choice == 2)
			display();
		else if (choice == 3)
			printf("%d\n", length(root));
		else if (choice == 4)
			printf("%d Duplicates\n", duplicate((int *)root));
		else if (choice == 5)
			checker(root);
		else
			return (0);
	}
	return (0);
}
