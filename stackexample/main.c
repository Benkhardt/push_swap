/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:23:12 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/09 12:42:21 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_elem	bota;
	t_elem	*ontop;
	t_elem	*tmp;
	t_elem	botb;
	t_elem	*ontopb;
	int test = check_num(argc, argv);
	printf("(%d)", test);

	if (argc == 1)
		return (0);
	if (argc < 3 || check_dup(argc, argv) || check_num(argc, argv) < 1)
	{

		ft_putstr_fd("Error", 1);
		return (-1);
	}
	bota.value = atoi(argv[argc - 1]);
	bota.top = NULL;
	bota.bot = NULL;
	botb.bot = NULL;
	botb.top = ontopb;
	tmp = &bota;
	argc--;
	while (--argc > 0)
	{
		ontop = create_elem_ontop(atoi(argv[argc]), tmp);
		tmp->top = ontop;
		tmp = ontop;
	}
	// printlist(ontop);
	// printf("\n");
	// // printlist_reverse(&bot);
	// // printf("\n");
	// swap(ontop);
	// printlist(ontop);
	// printf("\n");
	// rotate(ontop, &bot);
	// printlist(ontop);
	// printf("\n");
	// rev_rotate(ontop, &bot);
	// printlist(ontop); // a
	// printf("\n");
	ontopb = push(ontop, NULL);
	ontop = ontop->bot;
	printlist(ontop);
	printf("\n");
	printlist(ontopb);
	return (0);
}
