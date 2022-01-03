/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:21:49 by dbenkhar          #+#    #+#             */
/*   Updated: 2021/12/26 18:48:15 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

void init(char **argv, int argc, void *ptr_arr)
{
	int i = 0;
	int j = 1;
	int *arr = (int *)ptr_arr;
	arr = malloc(sizeof(int) * argc - 2);
	while (j <= argc - 1)
	{
		arr[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}

}

int main (int argc, char *argv[])
{
	int *arr;
	int i = 0;
	// int j = 1;
	// int i = 0;

	init(argv, argc, arr);
	// arr = malloc(sizeof(int) * argc - 2);
	// if (!arr)
	// 	return (-1);
	// while (j <= argc - 1)
	// {
	// 	arr[i] = ft_atoi(argv[j]);
	// 	i++;
	// 	j++;
	// }
	// i = 0;
	while (i <= argc - 2)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
