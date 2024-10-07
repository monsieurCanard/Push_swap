/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:41:57 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/06 12:46:23 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>
# include <string.h>
# include <stdio.h>
# define ERROR_MESSAGE "Error\n"

typedef struct s_list
{
	int				*stack_a;
	int				*stack_b;
	int				nb_arg;
	int				stack_a_size;
	int				stack_b_size;
	int				stack_b_max;
	int				cheap_nb;
	int				cheap_nb_stack_b;
	int				next_nb;
	int				before_nb;
	char			*buffer;
	int				min_b;
	int				min_a;
	int				max_a;
	int				max_b;
}	t_list;

//Creation et initialisation de la liste
t_list	*init_list(int argc, char **argv, t_list *data);

//Verification de la liste
void	verif_list(t_list *data);
int		check_sort(t_list *data);

//Initialisation
void	init_data(t_list *data);
void	init_field(int argc, t_list *data);
void	init_data_split(t_list *data, char **split_arg);

	// Trie de la liste
void	pocket_swap(t_list *data);
void	pocket_swap_reverse(t_list *data);
void	push_swap(t_list *data);
void	pocket_swap_5(t_list *data);

//Utils
int		ft_isdigit(char *str);
int		ft_atol(char *str, t_list *data);
int		ft_atol_split(char *str, t_list *data, char **split_arg);
void	ft_putstr_fd(char *s, int fd);
void	print_list(t_list *data);
void	handle_rotate_a(t_list *data);
void	handle_reverse_rotate_a(t_list *data);
int		ft_strcmp(const char *s1, const char *s2);

	// Operations
void	swap(t_list *data, char mode);
void	push(t_list *data, char mode);
void	rotate_all(t_list *data);
void	rotate_b(t_list *data);
void	rotate_a(t_list *data);
void	reverse_rotate_a(t_list *data);
void	reverse_rotate_b(t_list *data);
void	reverse_rotate_all(t_list *data);

//Handle_events
void	print_push_a(t_list *data);
void	print_push_b(t_list *data);
void	print_swap_a(t_list *data);
void	print_swap_b(t_list *data);
void	print_swap_x(t_list *data);
void	print_rotate_a(t_list *data);
void	print_rotate_b(t_list *data);
void	print_rotate_all(t_list *data);
void	print_reverse_rotate_a(t_list *data);
void	print_reverse_rotate_b(t_list *data);
void	print_reverse_rotate_all(t_list *data);

//Handle moves
int		moves_min(t_list *data, int current_v);
int		moves_max(t_list *data, int current_v);
int		moves_middle(t_list *data, int current_v);
int		moves_to_top_stack_a(t_list *data, int current_v);

//Handle Commands
void	launch_command(t_list *data, char *command);
void	execute_commands(t_list *data);
//Sort
void	sort_numbers(t_list *data);
int		calcul_cheapest(t_list *data);
void	first_phase(t_list *data);
void	second_phase(t_list *data);
int		case_perfect(t_list *data, int cheapest_nb);
void	find_next(t_list *data, int nb);
void	find_before(t_list *data, int nb);
void	handle_min(t_list *data);
void	handle_max(t_list *data);
void	find_max_min_stack(t_list *data);
void	handle_min_max(t_list *data);
void	case_perfect1_b(t_list *data);
void	case_perfect2_b(t_list *data);
void	case_perfect1_a(t_list *data);
void	case_perfect2_a(t_list *data);
void	case_reverse_rotate_both(t_list *data);
void	case_rotate_both(t_list *data);
void	case_hard1(t_list *data);
void	case_hard2(t_list *data);
void	handle_case_hard(t_list *data);
void	put_smallest_to_b(t_list *data);

//READ
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//Checker
size_t	ft_strlen(const char *str);
char	*ft_strdup_custom(char *src, int index_stop);
char	*ft_realloc(t_list *data, int buffer_len);
void	execute_commands(t_list *data);
char	**ft_split(char const *s, char c);
void	init_split_arg(t_list *data, char **argv);

//Error
void	handle_error(void);
void	free_all_error(t_list *data);
void	free_all(t_list *data);
void	free_all_error_split(t_list *data, char **split_arg);
void	*ft_calloc(size_t nb, size_t size);
void	ft_bzero(void *s, size_t n);
void	free_data(t_list *data);
void	free_checker(t_list *data, char *command);

#endif