# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 11:04:06 by oidrissi          #+#    #+#              #
#    Updated: 2021/12/18 20:51:14 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
OBJ = $(SRC:.cpp=.o)
EXE = Claptrap
FLAGS = -Wall -Wextra -Werror
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all