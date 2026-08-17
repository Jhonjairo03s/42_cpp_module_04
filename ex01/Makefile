# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/15 15:16:18 by jhvalenc          #+#    #+#              #
#    Updated: 2026/08/17 20:16:39 by jhvalenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = Brain

CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = Animal.cpp \
	      Dog.cpp \
	      Cat.cpp \
	      Brain.cpp \
	      main.cpp

OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
