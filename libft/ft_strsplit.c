/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:39:54 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/10 10:07:24 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(const char *str, char c)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static int	words(char const *str, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	if (str == NULL)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] != c)
			word++;
		if (str[i] != c && str[i - 1] == c)
			word++;
		i++;
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	fresh = (char **)malloc(sizeof(char *) * words(s, c) + 1);
	if (fresh != NULL)
	{
		while (++i < words(s, c))
		{
			fresh[i] = ft_strnew(len(s + j, c));
			while (s[j] == c)
				j++;
			k = 0;
			while (s[j] && s[j] != c)
				fresh[i][k++] = s[j++];
			fresh[i][k] = '\0';
		}
		fresh[i] = 0;
		return (fresh);
	}
	return (NULL);
}
