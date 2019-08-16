/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/15 16:34:14 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*res(int mid, int k, struct node **top, int *ch)
{
	int	i;
	int j;
	int	*res1;

	i = 1;
	j = 0;
	res1 = (int *)malloc(sizeof(int) * 2);
	/* while (i <= mid)
	{
		if (pos(*top, i) >= find_min(*top) && pos(*top, i) <= ch)
		{
			res1[0] = i;
			break ;
		}
		i++;
	}
	i = 1;
	while (k > mid)
	{
		if (pos(*top, k) >= find_min(*top) && pos(*top, k) <= ch)
		{
			res1[1] = i;
			break ;
		}
		k--;
		i++;
	} */

	while (j < 5)
	{
		i = 1;
		 while (i <= mid)
        {
			if (pos(*top, i) >= find_min(*top) && pos(*top, i) <= ch[j])
			{
				res1[0] = i;
				break ;
			}
            i++;
        }
		i = 1;
		while (k > mid)
		{

			if (pos(*top, k) >= find_min(*top) && pos(*top, k) <= ch[j])
			{
				res1[1] = i;
				break ;
			}
            k--;
			i++;
		}
		if (res1[1] == 0 && res1[0] == 0)
			j++;
		else
			break ;
	}
	return (res1);
}