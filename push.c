/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:23:05 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/19 15:25:46 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(char *s)
{
    struct node *temp;
    int         dat;

    dat = ft_atoi(s);
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return;
    temp -> data = dat;
    temp -> link = top;
    top = temp;
}
