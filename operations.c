/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:49:54 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/11 14:31:45 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// swap top two elem
// can be used on both stacks in the end
// t_elem	start_stack(void)
// {
// 	t_elem	bot;
	
// 	bot.value = 0;
// 	bot.id = 0;
// 	bot.bot = NULL;
// 	bot.top = NULL;
// 	return (bot);
// }

t_elem	*create_elem_ontop(int value, t_elem *top)
{
	t_elem	*rtn;

	rtn = malloc(sizeof(t_elem));
	if (!rtn)
		return (NULL);
	rtn->value = value;
	rtn->bot = top;
	rtn->top = NULL;
	rtn->lable = -1;
	return (rtn);
}

t_elem	*create_elem_onbot(int value, t_elem *bot)
{
	t_elem	*rtn;

	rtn = malloc(sizeof(t_elem));
	if (!rtn)
		return (NULL);
	rtn->value = value;
	bot->bot = rtn;
	rtn->bot = NULL;
	rtn->top = bot;
	rtn->lable = -1;
	return (rtn);
}

// swaps the first two elements of any (can be used on both) stack
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

// rotate up, top gets bot and 2nd top gets top
// can be used on both stacks in the end
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

// rotate down, bot gets top and 2nd bot gets bot
// can be used on both stacks in the end
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

void	printlist(t_elem *top)
{
	t_elem	*tmp;

	tmp = top;
	while (tmp != NULL)
	{
		printf("%d %d\n", tmp->value, tmp->lable);
		if (tmp->bot == NULL && tmp->top == NULL)
			printf("is NULL\n");
		tmp = tmp->bot;
	}
}

// push from -> to (top to top)
// can be used on both stacks in the end
// // MANDATORY: using another function to call this function in the end to cut down the old stack from where it gets pushed
// t_elem	*push(t_elem *from, t_elem *to)
// {
// 	t_elem	*rtn;
// 	t_elem	*tmp;
	
// 	tmp = from->bot;
// 	rtn = malloc(sizeof(t_elem));
// 	rtn->bot = to;
// 	if (to != NULL)
// 		to->top = rtn;
// 	rtn->top = NULL;
// 	rtn->value = from->value;
// 	tmp->top = NULL;
// 	free(from);
// 	return (rtn);
// }

t_elem	**push_a(t_elem **stack)
{
	t_elem *tmp;

	tmp = stack[1]->bot;
	stack[1]->bot = stack[2];
	if (stack[2] != NULL)
		stack[2]->top = stack[1];
	stack[2] = stack[1];
	stack[1] = tmp;
	if (stack[1] != NULL)
		stack[1]->top = NULL;
	return (stack);
}

t_elem	**push_b(t_elem **stack)
{
	t_elem *tmp;

	tmp = stack[2]->bot;
	stack[2]->bot = stack[1];
	if (stack[1] != NULL)
		stack[1]->top = stack[2];
	stack[1] = stack[2];
	stack[2] = tmp;
	if (stack[2] != NULL)
		stack[2]->top = NULL;
	return (stack);
}