/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:24:32 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/10 11:30:36 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_elem *top)
{
	t_elem *tmp1;
	t_elem *tmp2;

	tmp1 = top;
	tmp2 = top->bot;
	while (tmp2 != NULL)
	{
		if (tmp1->value > tmp2->value)
			return (0);
		tmp1 = tmp1->bot;
		tmp2 = tmp2->bot;
	}
	return (1);
}
