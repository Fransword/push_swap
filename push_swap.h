/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:12:05 by francflo          #+#    #+#             */
/*   Updated: 2024/11/23 20:13:54 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//COST
int			cost(int a, int b);
int			cost_move(int *move, int c);
//DO_MOVE
void		reverse_stack(int *sa, int *sb);
void		rotate_stack(int *sa, int *sb);
void		rotate_a(int *sa);
void		rotate_b(int *sb);
void		do_move(int *sa, int *sb, char *move);
//MAIN
int			push_swap(char **argv);
int			*get_num(char **argv, int *size);
int			main(int argc, char **argv);
//POS
int			get_pos(int *stack, int size, int value);
int			get_target(int *sa, int *sb, int value);
int			pos_low_index(int *stack, int size);
int			get_target_pos(int *stack, int size, int target);
//PUSH
void		push(int **src, int **dst);
void		do_pa(int **sa, int **sb);
void		do_pb(int **sa, int **sb);
//ROTATE
void		rev_rotate(int *stack, int size);
void		do_rra(int **sa);
void		do_rrb(int **sb);
void		do_rrr(int **sa, int **sb);
//SORT_THREE
int			big_index(int *stack, int size);
void		sort_three(int *stack, int size);
//SORT
void		push_init(int **sa, int **sb);
void		sort_stack(int **sa, int **sb);
void		sort(int **sa, int **sb);
//SPLIT
static int	ft_count_words(char const *s, char c);
static char	**ft_memory(char const *s, char c);
static int	ft_cris(char const *s, char c, int *k, char **result);
char		**ft_split(char const *s, char c);
//STACK
t_stack		*stack_new(int value);
void		stack_add(t_stack **stack, t_stack *new);
t_stack		*get_bottom(t_stack *stack);
t_stack		*before_bottom(t_stack *stack);
int			get_size(t_stack *stack);
//START
int			is_correct(char **argv);
int			is_duple(int *stack, int size, int value);
int			get_index(int *stack, int size, int value);
//SWAP
void		swap(int *stack);
void		do_sa(int *sa);
void		do_sb(int *sb);
void		dd_ss(int **sa, int **sb);
//UTILS
void		free_stack(t_stack **stack);
void		ft_error(char *warning);
int			ft_atoi(char *str);
void		ft_putstr(char *str);
int			abs(int value);
