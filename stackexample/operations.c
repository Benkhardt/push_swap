/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:49:54 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/03 14:21:14 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap top two elem
//can be used on both stacks in the end
t_elem	*swap(t_elem *top)
{
	t_elem	*tmp;
	
	tmp = top->bot;
	top->bot = tmp->bot;
	top->top = tmp;
	tmp->bot = top;
	tmp->top = NULL;
	printf("swap\n");
	return (tmp);
}

//rotate up, top gets bot and 2nd top gets top
//can be used on both stacks in the end
void	rotate(t_elem *top, t_elem *bot)
{
	int		tmp;
	t_elem	*tmp2;

	tmp = bot->value;
	tmp2 = bot->top;
	tmp2->value = 
	while (tmp2->top != NULL)
	{

	}
}

// //rotate down, bot gets top and 2nd bot gets bot
// //can be used on both stacks in the end
// t_elem	*rev_rotate(t_elem *top, t_elem *bot)
// {

// }

// //push from -> to (top to top)
// //can be used on both stacks in the end
// t_elem	*push(t_elem *from, t_elem *to)
// {

// }


