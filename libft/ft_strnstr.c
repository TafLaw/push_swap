/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:02:56 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/05/29 17:38:55 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)hay);
	while (hay[i] != '\0' && i < n)
	{
		j = 0;
		while (hay[i + j] == needle[j] && (i + j) < n)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)hay + i);
		}
		i++;
	}
	return (0);
}
