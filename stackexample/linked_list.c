/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:21:04 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/02 12:23:56 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

static void print_list_bot_top(t_elem *start)
{

}

static void print_list_top_bot(t_elem *start) //just 
{
	
}



t_elem *add_elem_top(char *argv)
{
	t_elem *result;

	result = malloc(sizeof(t_elem));
	result->value = atoi(argv);
	result-> = NULL;
	return (result);
}

int main(int argc, char *argv[])
{
	t_elem 	*top = NULL;
	t_elem	*bot = NULL;
	t_elem	*tmp;

	while (--argc > 0)
	{
		tmp = add_elem_top(argv[])
	}
}
