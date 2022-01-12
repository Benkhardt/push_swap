/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:22:22 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/12 15:11:35 by dbenkhar         ###   ########.fr       */
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
	int				lable;	// lable from smallest to biggest no matter which value (handles negative value aswell)
	struct s_elem	*bot;
}	t_elem;

void	push_swap(int argc, char **argv);

t_elem	*create_elem_ontop(int value, t_elem *top);

t_elem	*create_elem_onbot(int value, t_elem *bot);

t_elem	start_stack(void);

t_elem	*lable(int argc, t_elem *topa);

t_elem	**sort_small_stack(t_elem **stack);

t_elem	*sort_big_stack(t_elem *topa, t_elem *topb);

t_elem	**push_a(t_elem **stack);

t_elem	**push_b(t_elem **stack);

void	printlist(t_elem *top);

void	swap(t_elem *top);

// void	rotate(t_elem *top, t_elem *bot);

t_elem	**rotate_a(t_elem **stack);

t_elem	**rev_rotate_a(t_elem **stack);

t_elem	**rotate_b(t_elem **stack);

t_elem	**rev_rotate_b(t_elem **stack);

// void	rev_rotate(t_elem *top, t_elem *bot);

int		ft_isnum(char *str);

int		is_sorted(t_elem *top);

int		ft_compare(char *s1, char *s2);

int		check_dup(int argc, char **argv);

int		check_num(int argc, char **argv);

#endif