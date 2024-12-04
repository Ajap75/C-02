# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 12:53:29 by anastruc          #+#    #+#              #
#    Updated: 2024/11/18 13:51:41 by antoinejour      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed_point_class
COMPIL = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98 -g3 -fPIC

PINK = \033[1;35m
BLUE = \033[1;36m
NC = \033[0m

HEADER = headers/Fixed.hpp\

SRCS = main.cpp \
		Fixed.cpp \

PSRCS = $(addprefix srcs/, $(SRCS))

OBJS = $(PSRCS:srcs/%.cpp=objs/%.o);

all : $(NAME)

objs/%.o: srcs/%.cpp $(HEADER)
		@mkdir -p objs
		@$(COMPIL) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		@$(COMPIL) $(FLAGS) -o $@ $(OBJS)
		@echo "$(BLUE)\n  Prog COMPILED \n$(NC) "


clean :
	@rm -rf objs
	@echo  "$(BLUE)\n  FIXED_POINT_CLASS CLEANED \n$(NC)"

fclean : clean
	@rm -rf $(NAME)
	@echo  "$(BLUE)\n  FIXED_POINT_CLASS FULLY CLEANED \n$(NC)"

leak :
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)

re : fclean all

.PHONY : all clean fclean re bonus