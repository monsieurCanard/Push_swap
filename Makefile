
NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -I -g3 

PATH_SRCS = srcs/

PATH_UTILS = utils/

PATH_OBJS = objs/

GREEN        := \033[0;92m
YELLOW        := \033[0;93m
BLUE        := \033[0;94m
END_COLOR    := \033[0;39m

#Les différents fichiers à compiler
INC 		= 	includes/push_swap.h

SRCS 		=	$(PATH_SRCS)free.c			\
				$(PATH_SRCS)handle_error.c 	\
				$(PATH_SRCS)init_list.c 	\
				$(PATH_SRCS)main.c			\
				$(PATH_SRCS)verif_list.c 	\
				$(PATH_SRCS)pocket_swap.c	\
				$(PATH_SRCS)swap.c			\
				$(PATH_SRCS)push.c			\
				$(PATH_SRCS)rotate.c		\
				$(PATH_SRCS)reverse_rotate.c \
				$(PATH_SRCS)push_swap.c		\
				$(PATH_SRCS)first_phase.c	\
				$(PATH_SRCS)calcul_cheapest.c \
				$(PATH_SRCS)handle_numbers.c \
				$(PATH_SRCS)handle_numbers_2.c \
				$(PATH_SRCS)handle_numbers_3.c \
				$(PATH_SRCS)sort_numbers.c \
				$(PATH_SRCS)pocket_swap_reverse.c \
				$(PATH_SRCS)find_next.c \
				$(PATH_SRCS)handle_min_max.c \
				$(PATH_SRCS)second_phase.c	\
				$(PATH_SRCS)sort_case_hard.c \
				$(PATH_SRCS)sort_case_perfect.c \
				$(PATH_SRCS)sort_rotate_both.c  \
				$(PATH_SRCS)pocket_swap_5.c	\
				$(PATH_SRCS)check_sort.c	\
				$(PATH_SRCS)handle_moves.c \
				$(PATH_SRCS)handle_min_max_utils.c \
				$(PATH_UTILS)ft_split.c	\
				$(PATH_UTILS)ft_calloc.c \
				$(PATH_UTILS)ft_atol.c 	\
				$(PATH_UTILS)ft_isdigit.c 	\
				$(PATH_UTILS)ft_putstr_fd.c \
				$(PATH_UTILS)ft_bzero.c 	\
				$(PATH_SRCS)init_list2.c \

#Declarer Objet avec le groupe  
OBJS = ${SRCS:.c=.o}
# OBJS := $(addprefix $(PATH_OBJS)/, $(OBJS))
		
SRCS_BONUS =	$(PATH_UTILS)ft_atol.c \
				$(PATH_SRCS)free.c \
				$(PATH_UTILS)ft_isdigit.c \
				$(PATH_UTILS)ft_putstr_fd.c \
				$(PATH_SRCS)checker.c \
				$(PATH_SRCS)handle_error.c \
				$(PATH_SRCS)init_list.c \
				$(PATH_SRCS)init_list2.c \
				$(PATH_SRCS)verif_list.c \
				$(PATH_SRCS)swap.c \
				$(PATH_SRCS)push.c \
				$(PATH_SRCS)rotate.c \
				$(PATH_SRCS)reverse_rotate.c \
				$(PATH_SRCS)check_sort.c \
				$(PATH_SRCS)handle_commands.c \
				$(PATH_UTILS)ft_strlen.c \
				$(PATH_UTILS)ft_split.c	\
				$(PATH_UTILS)ft_calloc.c \
				$(PATH_UTILS)ft_bzero.c \
				$(PATH_UTILS)ft_strcmp.c 
 
OBJS_BONUS = ${SRCS_BONUS:.c=.o} 

#Création l'éxécutable 
$(NAME): ${OBJS}
		@${CC} ${CFLAGS} $(OBJS) -o $(NAME)
		@echo "$(GREEN)Compiled $(NAME):)$(END_COLOR)"

all: $(NAME)

bonus : $(OBJS_BONUS)
	${CC} ${CFLAGS} $(OBJS_BONUS) -o checker

#Regle de nettoyage des fichiers objets 
clean:	
		@rm -f $(OBJS) $(OBJS_BONUS)
		@echo "$(YELLOW)Removed object files.$(END_COLOR)"

#Regle de nettoyage executable
fclean:	clean
		@rm -f $(NAME) checker
		@echo "$(YELLOW)Cleaned libraries and $(NAME) executable.$(END_COLOR)"


re:	fclean all 
	@echo "$(GREEN)Cleaned all and rebuilt $(NAME)$(END_COLOR)"


#Eviter que meme si un fichier s'appelle clean, make executera la règle.
.PHONY: re clean fclean bonus
