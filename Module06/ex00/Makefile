# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 15:53:22 by oidrissi          #+#    #+#              #
#    Updated: 2022/02/24 01:15:19 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
OBJ = $(SRC:.cpp=.o)
EXE = Converter
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp convert.cpp

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all