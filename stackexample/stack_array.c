/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 18:52:06 by dbenkhar          #+#    #+#             */
/*   Updated: 2021/12/26 20:18:50 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN


int mystack[STACK_LENGTH];
int top = EMPTY;

bool push(int value)
{
	if (top >= STACK_LENGTH - 1)
		return (false);

	top++;
	mystack[top] = value;
	return (true);
}

int pop()
{
	int result;

	if (top == EMPTY)
		return (STACK_EMPTY);
	result = mystack[top];
	top--;
	return (result);
}

int main()
{
	int t;
	
	push (3);
	push (2);
	push (1);
	while ((t = pop()) != STACK_EMPTY)
	{
		printf("t = %d\n", t);
	}
}