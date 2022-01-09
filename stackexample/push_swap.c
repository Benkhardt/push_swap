/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:13:12 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/09 14:16:33 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void push_swap(int argc, char **argv)
{
	t_elem bota;
	t_elem botb;
	t_elem *tmp;
	t_elem *ontopa;
	t_elem *ontopb;


	bota.value = atoi(argv[argc - 1]);
	bota.top = NULL;
	bota.bot = NULL;
	botb.bot = NULL;
	botb.top = ontopb;
	tmp = &bota;
	argc--;
	while (--argc > 0)
	{
		ontopa = create_elem_ontop(atoi(argv[argc]), tmp);
		tmp->top = ontopa;
		tmp = ontopa;
	}
	printlist(ontopa);
}