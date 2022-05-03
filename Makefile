# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 23:33:38 by root              #+#    #+#              #
#    Updated: 2022/05/02 12:37:37 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMMIT = dantremb

all:
	clear
	@(gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c)
	@(./a.out)
	@(rm -f *.out)
	@(rm -f *.o)

git:
	@(git add .)
	@(git commit -m "$(COMMIT)")
	@(git push)
	