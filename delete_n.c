/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:24:22 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/23 15:34:16 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_n(struct node *top)
{
	struct node *temp;

	temp = top;
	top = temp -> link;
	temp -> link = NULL;
	free(temp);
}
