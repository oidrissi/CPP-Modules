# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 05:30:57 by oidrissi          #+#    #+#              #
#    Updated: 2021/12/06 14:55:24 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
OBJ = $(SRC:.cpp=.o)
EXE = Phonebook
FLAGS = -Wall -Wextra -Werror -fsanitize=address -g
SRC = Phonebook.cpp Contacts.cpp

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXE)

re: fclean all