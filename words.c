/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   words.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:44:31 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/08/21 11:44:48 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	words(char const *str, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	if (str == NULL)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] != c)
			word++;
		if (str[i] != c && str[i - 1] == c)
			word++;
		i++;
	}
	return (word);
}
