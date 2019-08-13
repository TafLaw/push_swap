/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_temp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:13:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/05 14:49:57 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_temp(int	**temp, int	len, char **argv)
{
	int *t;
	int i;
	int j;

	j = 0;
	i = 1;
	t = *temp;
	while (i++ <= len - 1)
	{
		if (!number(argv[i]) || !max(argv[i]))
        {
            ft_putendl("Error");
            return;
        }
        t[j++] = ft_atoi(argv[i]);
	}
	*temp = t;
}
