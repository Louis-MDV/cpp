# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 11:35:43 by louismdv          #+#    #+#              #
#    Updated: 2024/10/25 11:45:27 by louismdv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= brain

CXX 		= c++
CXXFLAGS	= -Wall -Wextra -std=c++98 -Werror

RED			= 	$(shell tput setaf 1)
GREEN		= 	$(shell tput setaf 2)
YELLOW		= 	$(shell tput setaf 3)
NC			= 	$(shell tput sgr0)

SRCS		= 	main.cpp						

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
	@printf "[cpp01:ex02] \033[1;31mCleaned all!\033[0m\n"

re: fclean all

.PHONY: all clean fclean re
