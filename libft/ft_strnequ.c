/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:34:11 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/06 09:16:10 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = ft_strncmp(s1, s2, n);
	if (i == 0)
		return (1);
	return (0);
}
