# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 15:51:33 by louismdv          #+#    #+#              #
#    Updated: 2024/11/20 16:25:28 by louismdv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	bureaucrat

CXX 		= 	c++
CXXFLAGS	= 	-Wall -Wextra -Werror -std=c++98 -g3

RED			= 	$(shell tput setaf 1)
GREEN		= 	$(shell tput setaf 2)
YELLOW		= 	$(shell tput setaf 3)
NC			= 	$(shell tput sgr0)

SRCS		= 	 $(addprefix src/, AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp) main.cpp

OBJECTS 	= 	$(SRCS:.cpp=.o)

# Default target (what will run when you type 'make')
all: $(NAME)

# Rule to build the executable
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Rule to compile .cpp files into .o files
%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean up object files and the executable
clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	@rm -f $(NAME)
	@printf  "[cpp05:ex02] $(RED)Cleaned all!$(RESET)\n" 

re: fclean all

.PHONY: all clean fclean re
