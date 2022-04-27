# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 23:33:38 by root              #+#    #+#              #
#    Updated: 2022/04/27 12:55:05 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


all:
	clear
	@(gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c)
	@(./a.out)
	@(rm -f *.out)
	@(rm -f *.o)
	
git:
	@(git add .)
	@(git commit -m "dantremb")
	@(git push)