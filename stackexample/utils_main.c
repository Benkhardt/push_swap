/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:23:12 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/03 11:53:35 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dqueue.h"



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
	return (rtn);
}

t_elem	*create_elem_ontop(int value, t_elem *top)
{
	t_elem	*rtn;

	rtn = malloc(sizeof(t_elem));
	if (!rtn)
		return (NULL);
	rtn->value = value;
	rtn->bot = top;
	rtn->top = NULL;
	return (rtn);
}

static void	printlist_reverse(t_elem *bot)
{
	t_elem *tmp;

	tmp = bot;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->top;
	}
}

static void	printlist(t_elem *top)
{
	t_elem	*tmp;

	tmp = top;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->bot;
	}
}

int	main(int argc, char *argv[])
{
	t_elem	bot;
	t_elem	*ontop;
	t_elem	*tmp;

	bot.value = atoi(argv[argc - 1]);
	bot.top = NULL;
	bot.bot = NULL;
	tmp = &bot;
	argc--;
	while (--argc > 0)
	{
		ontop = create_elem_ontop(atoi(argv[argc]), tmp);
		tmp->top = ontop;
		tmp = ontop;
	}
	printlist(ontop);
	printf("\n");
	printlist_reverse(&bot);
	return (0);
}
