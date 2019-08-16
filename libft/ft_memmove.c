/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:01:09 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/07 14:50:25 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*de;
	unsigned char	*str;

	i = 0;
	de = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (de == 0 && str == 0)
		return ((unsigned char *)NULL);
	if (src > dest)
	{
		while (i < n)
		{
			de[i] = str[i];
			i++;
		}
	}
	else
		while (i < n)
		{
			de[n - 1] = str[n - 1];
			n--;
		}
	return (dest);
}
