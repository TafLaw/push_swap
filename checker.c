/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/08 18:03:09 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

checker(int *arr)
{
	unsigned int i;

	i = 0;
	j = 0;
	while (1)
	{
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
