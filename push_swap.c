/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:13:12 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/10 18:54:55 by dbenkhar         ###   ########.fr       */
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
	return (min);
}

void push_swap(int argc, char **argv)
{
	t_elem bota;
	t_elem botb;
	t_elem *tmp;
	t_elem *ontopa;
	t_elem *ontopb = &botb;
	int argc2;

	bota.value = ft_atoi(argv[argc - 1]);
	bota.lable = -1;
	botb.lable = -1;
	bota.top = NULL;
	bota.bot = NULL;
	botb.bot = NULL;
	botb.top = ontopb;
	tmp = &bota;
	argc--;
	argc2 = argc;
	while (--argc > 0)
	{
		ontopa = create_elem_ontop(ft_atoi(argv[argc]), tmp);
		tmp->top = ontopa;
		tmp = ontopa;
	}
	if (is_sorted(ontopa))
		return ;
	ontopa = lable(argc2, ontopa);
	ft_putstr_fd("stack a\n", 1);
	printlist(ontopa);
	ft_putstr_fd("stack b\n", 1);
	printlist(ontopb);
}
