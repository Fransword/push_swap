/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:54:05 by francflo          #+#    #+#             */
/*   Updated: 2024/11/23 20:40:38 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char **argv)
{
	int	size;
	int	*nums;
	int	i;
	t_stack *stack_a;//fumo

	*nums = get_num(argv, &size);
	i = 0;
	*stack_a = NULL;

	if (i < size)
	{
		stack_add(&sa, stack_new(nums[i]));
		sort_stack(&sa, NULL);
		ft_free(nums);
		free_stack(&sa);
		i++;
	}
	return (0);
}
int	*get_num(char **argv, int *size)		//ARREGLA ESTO ANDA
{
	int	j;
	int	i;
	int	*nums;
	
	j = 0;
	i = 0;
	*size = i;
	
}
int	main(int argc, char **argv);