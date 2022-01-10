/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:22:22 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/10 18:10:51 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"

// typedefs

typedef struct s_elem{
	struct s_elem	*top;
	int				value;
	int				lable;
	struct s_elem	*bot;
}	t_elem;

void push_swap(int argc, char **argv);

t_elem	*create_elem_ontop(int value, t_elem *top);

t_elem	*create_elem_onbot(int value, t_elem *bot);

t_elem	start_stack(void);

t_elem	*lable(int argc, t_elem *topa);

void	printlist(t_elem *top);

void	swap(t_elem *top);

void	rotate(t_elem *top, t_elem *bot);

void	rev_rotate(t_elem *top, t_elem *bot);

t_elem	*push(t_elem *from, t_elem *to);

int		ft_isnum(char *str);

int		is_sorted(t_elem *top);

int		ft_compare(char *s1, char *s2);

int		check_dup(int argc, char **argv);

int		check_num(int argc, char **argv);

#endif