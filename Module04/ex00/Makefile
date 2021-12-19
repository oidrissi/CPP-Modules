# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 11:04:06 by oidrissi          #+#    #+#              #
#    Updated: 2021/12/19 17:04:36 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
OBJ = $(SRC:.cpp=.o)
EXE = ScavTrap
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all