##
## Makefile for my_select in /home/dupard_e/rendus/PSU_2014_my_select
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Mon Dec 15 10:11:35 2014 Erwan Dupard
## Last update Wed Jan  7 18:56:50 2015 Erwan Dupard
##

CC	= gcc

NAME	= my_select

CFLAGS	+= -Wall -Werror -Wextra
CFLAGS	+= -pedantic -ansi

LDFLAGS	+= -L./include -L./lib -lmy -lncurses

RM	= rm -f

SRCS	= main.c 	\
	  list.c	\
	  list2.c	\
	  term.c	\
	  term2.c	\
	  my_select.c	\
	  my_select2.c	\

OBJS	= $(SRCS:.c=.o)

all: library $(NAME)

library: 
	make -C lib/my

library-re:
	make -C lib/my re

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean:
	make -C lib/my clean
	$(RM) $(OBJS)

fclean: clean
	make -C lib/my fclean
	$(RM) $(NAME)

re: fclean library-re all


.PHONY: library all clean fclean 
