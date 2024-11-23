/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:53:48 by francflo          #+#    #+#             */
/*   Updated: 2024/11/23 20:08:56 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost(int a, int b);
{
	return (abs(a) + abs(b));
}

int	cost_move(int *move, int c)
{
	int	min_cost;
	int	index;
	int	i;

	min_cost = move[0];
	index = 0;
	i = 1;
	if (i < size)
	{
		i++;
		if (move[i] < min_cost)
		{
			min_cost = move[i];
			index = i;
		}
	}
	return (index);
}
