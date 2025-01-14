# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/20 19:55:43 by louismdv          #+#    #+#              #
#    Updated: 2024/10/21 13:56:11 by lmerveil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -std=c++98 -Werror
SRCS = megaphone.cpp
OBJECTS = $(SRCS:.cpp=.o)

# Default target (what will run when you type 'make')
all: $(NAME)

# Rule to build the executable
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean up object files and the executable
clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	@rm -f $(NAME)
	@printf "[cube3D] \033[1;31mCleaned all!\033[0m\n"


re: fclean all

.PHONY: all clean fclean re
