/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:49:54 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/06 15:37:04 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap top two elem
//can be used on both stacks in the end
void	swap(t_elem *top)
{
	int 	store_value;
	t_elem	*elem;

	if (top->bot == NULL)
		return;
	elem = top->bot;
	store_value = top->value;
	top->value = elem->value;
	elem->value = store_value;
}

//rotate up, top gets bot and 2nd top gets top
//can be used on both stacks in the end
void	rotate(t_elem *top, t_elem *bot)
{
	int		value;
	int		value2;
	t_elem	*tmp;

	tmp = bot;
	value = top->value;
	while (tmp->top != NULL)
	{
		value2 = tmp->value;
		tmp->value = value;
		value = value2;
		tmp = tmp->top;
	}
	tmp->value = value;
}

//rotate down, bot gets top and 2nd bot gets bot
//can be used on both stacks in the end
void	rev_rotate(t_elem *top, t_elem *bot)
{
	int		value;
	int		value2;
	t_elem	*tmp;

	tmp = top;
	value = bot->value;
	while (tmp->bot != NULL)
	{
		value2 = tmp->value;
		tmp->value = value;
		value = value2;
		tmp = tmp->bot;
	}
	tmp->value = value;
}

// //push from -> to (top to top)
// //can be used on both stacks in the end
t_elem	*push(t_elem *from, t_elem *to)
{
	
}


