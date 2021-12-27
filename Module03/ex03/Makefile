# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 11:04:06 by oidrissi          #+#    #+#              #
#    Updated: 2021/12/22 12:45:03 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
OBJ = $(SRC:.cpp=.o)
EXE = DiamondTrap
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all