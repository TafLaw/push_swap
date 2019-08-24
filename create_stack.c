/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 09:51:17 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/21 11:53:38 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		cond_2(t_list **top, int *temp, char **argv, int k)
{
	int		i;
	int		j;

	i = 0;
	j = k - 1;
	while (i < k)
	{
		*top = push(temp[j--], *top);
		if (!checker(argv[i++], *top))
		{
			free(temp);
			return (0);
		}
	}
	return (1);
}

int				create_stack(t_list **top, int *temp, char **argv, int j)
{
	int i;
	int	k;

	i = 0;
	k = j;
	j = j - 1;
	if (argv[0][3] >= 'a' && argv[0][4] <= 'z')
		i = 1;
	if (i == 1)
	{
		while (i <= k)
		{
			*top = push(temp[j--], *top);
			if (!checker(argv[i++], *top))
			{
				free(temp);
				return (0);
			}
		}
	}
	else if (!cond_2(top, temp, argv, k))
		return (0);
	free(temp);
	return (1);
}
