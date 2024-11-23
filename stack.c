/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:54:20 by francflo          #+#    #+#             */
/*   Updated: 2024/11/23 20:28:27 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_stack		*stack_new(int value);
void		stack_add(t_stack **stack, t_stack *new);
t_stack		*get_bottom(t_stack *stack);
t_stack		*before_bottom(t_stack *stack);
int			get_size(t_stack *stack);