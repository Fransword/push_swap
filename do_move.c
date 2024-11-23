/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:53:57 by francflo          #+#    #+#             */
/*   Updated: 2024/11/23 20:29:55 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_stack(int *sa, int *sb)
{
	rev_rotate(sa, get_size(sa));
	rev_rotate(sb, get_size(sb));
}

void	rotate_stack(int *sa, int *sb)
{
	rotate(sa, get_size(sa));
	rotate(sb, get_size(sb));
}

void	rotate_a(int *sa)
{
	rotate(sa, get_size(sa));
}

void	rotate_b(int *sb)
{
	rotate(sb, get_size(sb));
}

void	do_move(int *sa, int *sb, char *move)
{
	if (ft_strcmp(move, "ra") == 0)
		rotate_a(sa);
	else if (ft_strcmp(move, "rb") == 0)
		rotate_b(sb);
	else if (ft_strcmp(move, "rr") == 0)
		rotate_stack(sa, sb);
	else if (ft_strcmp(move, "rra") == 0)
		rev_rotate(sa, get_size(sa));
	else if (ft_strcmp(move, "rrb") == 0)
		rev_rotate(sb, get_size(sb));
	else if (ft_strcmp(move, "rrr") == 0)
		reverse_stack(sa, sb);
	else if (ft_strcmp(move, "pa") == 0)
		do_pa(&sa, &sb);
	else if (ft_strcmp(move, "pb") == 0)
		do_pb(&sa, &sb);
	else if (ft_strcmp(move, "sa") == 0)
		do_sa(sa);
	else if (ft_strcmp(move, "sb") == 0)
		do_sb(sb);
	else if (ft_strcmp(move, "ss") == 0)
		do_ss(&sa, &sb);
}
