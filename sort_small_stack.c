/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:35:52 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/11 20:39:11 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Description:	sorts stack smaller equal 5 by using given operations
// Parameters:	takes 2 parameters, top of stack a and start of stack b
// Return:		Returns the pointer to sorted stack a
t_elem	**sort_small_stack(t_elem **stack)
{
	int		shift;
	
	shift = 0;
	while (((stack[1]->lable >> shift) & 1) == 0)
	{
		stack = push_a(stack);
		// printlist(stack[1]);
		// ft_putchar_fd('\n', 1);
		// printlist(stack[2]);
		// ft_putchar_fd('\n', 1);
	}
	return (stack);
}

// 0  000
// 2  010
// 1  001
// 4  100 
// 3  011

