/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:22:22 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/06 14:37:06 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

// typedefs

typedef struct s_elem{
	struct s_elem	*top;
	int				value;
	int				id;
	struct s_elem	*bot;
}	t_elem;

t_elem	*create_elem_ontop(int value, t_elem *top);
t_elem	*create_elem_onbot(int value, t_elem *bot);
void	swap(t_elem *top);
void	rotate(t_elem *top, t_elem *bot);
void	rev_rotate(t_elem *top, t_elem *bot);

#endif