/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:06:04 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/22 14:26:38 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ss;
	char	*str;
	size_t	i;

	i = 0;
	ss = (char *)s;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	else
	{
		while (ss[i] != '\0')
		{
			str[i] = ss[i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
}
