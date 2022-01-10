/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:13:12 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/10 14:02:55 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*find_min(t_elem *topa)
{
	t_elem	*min;
	t_elem	*tmp;

	min = topa;
	tmp = topa->bot;
	while (tmp != NULL)
	{
		if (min->value > tmp->value)
			min = tmp;
		tmp = tmp->bot;
	}
	min->lable = 0;
	return (min);
}

t_elem	*lable(int argc, t_elem *topa)
{
	t_elem	*tmp1;
	t_elem	*tmp2;
	int		lable;

	tmp1 = topa;
	tmp2 = topa->bot;
	lable = 0;
	while (lable < argc)
	{
		while (tmp1 != NULL)
		{
			if (tmp1->lable == -1 && tmp2->lable == -1)
			{
				
			}
		}
	}
	return (topa);
}

void push_swap(int argc, char **argv)
{
	t_elem bota;
	t_elem botb;
	t_elem *tmp;
	t_elem *ontopa;
	t_elem *ontopb = NULL;

	bota.value = atoi(argv[argc - 1]);
	bota.top = NULL;
	bota.bot = NULL;
	botb.bot = NULL;
	botb.top = ontopb;
	tmp = &bota;
	argc--;
	while (--argc > 0)
	{
		ontopa = create_elem_ontop(ft_atoi(argv[argc]), tmp);
		tmp->top = ontopa;
		tmp = ontopa;
	}
	if (is_sorted(ontopa))
		return ;
	ontopa = lable(argc, ontopa);
	printlist(ontopa);
}
