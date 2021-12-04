# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 05:30:57 by oidrissi          #+#    #+#              #
#    Updated: 2021/12/04 23:56:49 by oidrissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Create a Makefile that compiles and links the megaphone.cpp file
# to the megaphone.o file.
#
# The Makefile should contain the following:
#
#   - The name of the executable should be megaphone
#   - The name of the source file should be megaphone.cpp
#   - The name of the object file should be megaphone.o
#   - The name of the linker should be ld
#   - The name of the compiler should be clang++
#   - The name of the linker should be ld
#   - The name of the library should be -lm

CC = clang++
OBJ = $(SRC:.cpp=.o)
EXE = megaphone
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

all: $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(EXE)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all