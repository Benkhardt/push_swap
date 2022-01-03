/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:20:46 by dbenkhar          #+#    #+#             */
/*   Updated: 2021/12/26 17:42:09 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	main(int argc, char *argv[])
{
	int		check;
	t_stack	stack;
	int		i;

	check = 1;
	check = init_stacks(stack, argc - 1, argv);
	if (argc < 2 || !check)
	{
		ft_putstr_fd("error\n", 1);
		return (-1);
	}
	i = 0;
	while (i < argc - 1)
	{
		ft_putnbr_fd(stack.a[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
	return (0);
}
