/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:15:29 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/07 15:50:03 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *needle)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)hay);
	while (hay[i] != '\0')
	{
		j = 0;
		while (hay[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)hay + i);
		}
		i++;
	}
	return (0);
}
