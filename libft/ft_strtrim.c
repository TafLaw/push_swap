/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:36:10 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/21 16:31:50 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t			i;
	unsigned int	start;
	unsigned int	len;
	char			*new;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return ("");
	start = 0;
	len = ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\n' ||
				s[start] == '\t') && (start < ft_strlen(s)))
		start++;
	while ((s[len] == ' ' || s[len] == '\n' ||
				s[len] == '\t') && (len > start))
		len--;
	i = len - start + 1;
	new = ft_strsub(s, start, i);
	return (new);
}
