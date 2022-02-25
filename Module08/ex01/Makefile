# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 02:37:15 by oidrissi          #+#    #+#              #
#    Updated: 2022/02/25 02:40:33 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
OBJ = $(SRC:.cpp=.o)
EXE = Span
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = span.cpp

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all