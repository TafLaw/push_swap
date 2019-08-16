/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:17:07 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/06 11:20:01 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	unsigned int	len;
	unsigned int	j;

	len = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join = (char *)malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1) + 1));
	if (join != NULL)
	{
		while (s1[j] != '\0')
		{
			join[j] = s1[j];
			j++;
		}
		while (s2[len] != '\0')
		{
			join[j++] = s2[len];
			len++;
		}
		join[j] = '\0';
		return (join);
	}
	return (NULL);
}
