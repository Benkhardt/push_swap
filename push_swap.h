/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:01:15 by dbenkhar          #+#    #+#             */
/*   Updated: 2021/12/26 16:56:46 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h> //for testing purposes 
# include <unistd.h>

typedef struct s_stack {

	int	*a;
	int	*b;

} t_stack;

int	init_stacks(t_stack stack, int size, char **argv);

#endif 
