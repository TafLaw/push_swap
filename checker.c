/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/09 17:07:44 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length(t_list *root)
{
	t_list *temp;
	int		len;

	temp = root;
	while (temp != NULL)
	{
		len++;
		temp = temp -> link;
	}
	return (len);
}

void	checker(t_list *root)
{
	unsigned int i;
	t_list		*temp;
	
	temp = root;

	i = 0;
	j = 0;
	while (1)
	{
		if 
		if (!(arr[i] % 2) || !(arr[i] % 3) || arr[i])
			i++;
	}
	while (j < i)
	{
		if (arr[i])
	}
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	else
		checker()

}
