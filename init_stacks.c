/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 16:28:06 by dbenkhar          #+#    #+#             */
/*   Updated: 2021/12/26 17:37:54 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

/*
** transforms arguments into integers and fills stack a.
** Size will be the given arguments by parameters.
** Also checks for not valid arguments and stops program
** if any was found.
*/

int	init_stacks(t_stack stack, int size, char **argv)
{
	int	i;

	stack.a = (int *)malloc(sizeof(int) * size - 1);
	if (!stack.a)
		return (-1);
	stack.b = (int *)malloc(sizeof(int) * size - 1);
	if (!stack.b)
		return (-1);
	i = 0;
	while (i < size - 1)
	{
		*(stack.a + i) = ft_atoi(argv[i + 1]);
		i++;
	}
	return (1);
}
