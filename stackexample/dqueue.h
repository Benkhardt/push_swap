/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dqueue.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:22:22 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/03 10:29:23 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DQUEUE_H
# define DQUEUE_H

# include <stdio.h>
# include <stdlib.h>

// typedefs

typedef struct s_elem{
	struct s_elem	*top;
	int				value;
	int				id;
	struct s_elem	*bot;
}	t_elem;

void	printlist_top(t_elem *top);
t_elem	*create_elem_ontop(int value, t_elem *top);
t_elem	*create_elem_onbot(int value, t_elem *bot);

#endif