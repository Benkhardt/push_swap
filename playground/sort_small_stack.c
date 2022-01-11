/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:35:52 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/11 12:19:49 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Description:	sorts stack smaller equal 5 by using given operations
// Parameters:	takes 2 parameters, top of stack a and start of stack b
// Return:		Returns the pointer to sorted stack a
t_elem	*sort_small_stack(t_elem *topa, t_elem *topb)
{
	t_elem	*tmp;
	int		shift;
	
	tmp = topa->bot;
	shift = 0;
	// while (!(is_sorted(topa)))
	// {
		while (((topa->lable >> shift) & 1) == 0)
		{
			topb = push(topa, topb);
			topa = topa->bot;
			tmp = topa->bot;
		}
		return (topb);
	// }
}

// 0  000
// 2  010
// 1  001
// 4  100 
// 3  011

