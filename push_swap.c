/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:13:12 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/11 20:39:55 by dbenkhar         ###   ########.fr       */
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
	t_elem **stack; // 0 = tmp, 1 = a, 2 = b
	int argc2;

	bota.value = ft_atoi(argv[argc - 1]);
	bota.lable = -1;
	bota.top = NULL;
	bota.bot = NULL;
	stack = malloc(sizeof(t_elem) * 3);
	stack[0] = &bota;
	stack[1] = NULL;
	stack[2] = NULL;
	argc--;
	argc2 = argc;
	while (--argc > 0)
	{
		stack[1] = create_elem_ontop(ft_atoi(argv[argc]), stack[0]);
		stack[0]->top = stack[1];
		stack[0] = stack[1];
	}
	if (is_sorted(stack[1]))
		return ;
	stack[1] = lable(argc2, stack[1]);
	printlist(stack[1]);
	ft_putchar_fd('\n', 1);
	if (argc2 < 6)
	{
		stack = sort_small_stack(stack);
	}
	// while (stack[1] != NULL)
	// 	stack = push_a(stack);
	// // 	stack[2] = push(stack[1], stack[2]);
	// // stack[1] = stack[1]->bot;
	// // stack[1]->top = NULL;
	// // 	stack[2] = push(stack[1], stack[2]);
	// // stack[1] = stack[1]->bot;
	// // stack[1]->top = NULL;
	ft_putstr_fd("stack a\n", 1);
	printlist(stack[1]);
	ft_putstr_fd("stack b\n", 1);
	printlist(stack[2]);
	// while (stack[2] != NULL)
	// 	stack = push_b(stack);
	// ft_putstr_fd("stack a\n", 1);
	// printlist(stack[1]);
	// ft_putstr_fd("stack b\n", 1);
	// printlist(stack[2]);
}
