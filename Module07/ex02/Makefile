# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 13:01:44 by oidrissi          #+#    #+#              #
#    Updated: 2022/02/24 21:47:08 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
OBJ = $(SRC:.cpp=.o)
EXE = iter
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all