/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:49:48 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/21 16:39:25 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*max(char *str)
{
	str[0] = '8';
	return (str);
}

static char	*convert(unsigned int digi, int num, int n, char *str)
{
	unsigned int	rem;
	unsigned int	i;

	i = 0;
	while (i < digi)
	{
		rem = num % 10;
		str[i] = rem + '0';
		num = num / 10;
		i++;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	if (n == -2147483648)
		str = max(str);
	return (str);
}

char		*ft_itoa(int n)
{
	char			*str;
	signed int		num;
	unsigned int	digi;

	digi = ft_digit_count(n);
	num = n;
	if (n == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	if (num < 0)
	{
		num = -num;
		digi--;
	}
	if (!(str = ft_strnew(digi)))
		return (NULL);
	if (n == -2147483648)
	{
		num = n + 1;
		num = num * -1;
	}
	str = convert(digi, num, n, str);
	return (ft_strrev(str));
}
