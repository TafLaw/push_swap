/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 09:51:17 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/17 10:15:59 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		create_stack(t_list **top, int *temp, char **argv, int j)
{
	int i;
	int	k;

	i = 1;
	k = j;
	j = j - 1;
	while (i <= k)
	{
		*top = push(temp[j--], *top);
		if (!checker(argv[i++], *top))
		{
			free(temp);
			return (0);
		}
	}
	free(temp);
	return (1);
}
