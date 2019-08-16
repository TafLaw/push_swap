/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:53:04 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/06 16:14:01 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	de = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (de == NULL && str == NULL)
		return ((unsigned char *)NULL);
	while (i < n)
	{
		de[i] = str[i];
		i++;
	}
	return (de);
}
