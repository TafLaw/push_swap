/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/11 16:07:27 by tmuzeren         ###   ########.fr       */
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

int		duplicate(struct node *arr)
{
	struct node *temp;
	int dup;

	dup = 0;
	//printf("%d\n", arr -> data);
	while (arr)
	{
		temp = arr -> link;
		while (temp)
		{
			//printf("%d          %d\n", arr -> data, temp -> data);
			if (arr -> data == temp -> data)
				dup++;
			if (dup == 1)
				return (1);
			temp = temp -> link;
		}
		arr = arr -> link;
	}
	return (0);
}

void	checker(struct node *r)
{
	int			i;
	int			len;
	struct node	*temp;
	
	temp = r;
	i = 0;
	if (!temp)
		return;
	len = length(temp);
	while (i < len)
	{
		if (ft_isdigit(temp -> data) || duplicate(temp) || 
				(temp -> data > MAX && temp -> data < MIN))
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
	int len;

	len = length(root);
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
			printf("%d Duplicates\n", duplicate(root));
		else if (choice == 5)
			checker(root);
		else
			return (0);
	}
	return (0);
}
