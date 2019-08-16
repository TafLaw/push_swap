/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:32:16 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/06 11:08:00 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	sub = ft_strnew(len);
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = s1[start];
		i++;
		start++;
	}
	return (sub);
}
