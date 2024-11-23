/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:54:01 by francflo          #+#    #+#             */
/*   Updated: 2024/11/23 19:55:19 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			get_pos(int *stack, int size, int value);
int			get_target(int *sa, int *sb, int value);
int			pos_low_index(int *stack, int size);
int			get_target_pos(int *stack, int size, int target);