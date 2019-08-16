/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:17:10 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/10 13:41:21 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(dest);
	if (len > n)
		return (ft_strlen(src) + n);
	if (len < n)
		ft_strncat(dest, src, n - (len + 1));
	return (ft_strlen(src) + len);
}
