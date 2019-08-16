/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:57:54 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/05/22 12:44:38 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	temp;

	i = ft_strlen(str);
	j = 0;
	while ((i - 1) > j)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		i--;
		j++;
	}
	return (str);
}
