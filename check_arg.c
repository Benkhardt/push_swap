/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:58:23 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/01/10 14:03:07 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Description:	Checks a string for non num chars
// Return:		- Returns 0 if str has non num chars
// 				- Returns 1 if str is numeric
int	ft_isnum(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '-')
		i++;
	while (str[++i] != '\0')
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

// Description:	Checks, if s1 and
//				s2 are duplicates
// Return:		- Returns 0 when s1
//				  s2 aren't the same
//				- Returns 1 when dup
//				  was found
int ft_compare(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] != s2[j])
				return (0);
			j++;
			i++;
		}
	}
	return (1);
}

// Description: Checks every argument 
//				for duplicates and exits
//				program if any dup was found
// Return:		- 1 if dup was found
//				- 0 if no dup was found
int	check_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_compare(argv[i], argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// Description:	Checks all args for
// 				for nonnum chars
// Return:		- Returns 1 when all
//				args a numeric
//				- Returns -1 when a
//				non numeric char was
//				found.
int	check_num(int argc, char **argv)
{
	int	i;
	int	check;

	i = 1;
	check = 0;
	while (i < argc)
	{
		if (!(ft_isnum(argv[i])))
			check++;
		i++;
	}
	if (check > 0)
		return (-1);
	return (1);
}
