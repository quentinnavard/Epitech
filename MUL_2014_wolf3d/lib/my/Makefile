##
## Makefile for my_printf in /home/dupard_e/rendus/PSU_2013_my_printf/lib/my
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Wed Nov  5 14:37:40 2014 Erwan Dupard
## Last update Mon Dec  8 13:45:15 2014 Erwan Dupard
##

SRCS	= my_is_prime.c			\
	  my_getnbr.c			\
	  my_isneg.c			\
	  my_power_rec.c		\
	  my_putchar.c			\
	  my_fputchar.c			\
	  my_put_nbr.c			\
	  my_fputnbr.c			\
	  my_fputnbr_base.c		\
	  my_putstr.c			\
	  my_fputstr.c			\
	  my_putstrerr.c		\
	  my_revstr.c			\
	  my_showmem.c			\
	  my_showstr.c			\
	  my_sort_int_table.c		\
	  my_square_root.c		\
	  my_strcapitalize.c		\
	  my_strcat.c			\
	  my_strdup.c			\
	  my_strcmp.c			\
	  my_strcpy.c			\
	  my_str_isalpha.c		\
	  my_str_islower.c		\
	  my_str_isnum.c		\
	  my_str_isprintable.c		\
	  my_str_isupper.c		\
	  my_strlen.c			\
	  my_strlowcase.c		\
	  my_strncat.c			\
	  my_strncmp.c			\
	  my_strncpy.c			\
	  my_strstr.c			\
	  my_strupcase.c		\
	  my_swap.c			\
	  my_atoi.c			\
	  convert_base.c		\
	  my_getnbr_base.c		\
	  my_putstr_err.c		\
	  my_printf/my_funcs.c		\
	  my_printf/my_funcs2.c		\
	  my_printf/my_funcs3.c		\
	  my_printf/my_printf.c		\
	  my_fprintf/my_funcs.c		\
	  my_fprintf/my_funcs2.c	\
	  my_fprintf/my_fprintf.c	\
	  get_next_line/get_next_line.c	\
	  get_next_line/gnl.c		\
	  my_epurstr.c			\
	  my_putnbr_base.c		\
	  sort_int_tab.c		\

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic

NAME	= libmy.a

NEW_N	= ../libmy.a

OBJS	= $(SRCS:.c=.o)

HEADER  = my.h

NEW_H	= ../../include/my.h

CC	= gcc

CP	= cp -f

RM	= rm -f

AR	= ar

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) rc $(NAME) $(OBJS)
	$(CP) $(HEADER) $(NEW_H)
	$(CP) $(NAME) $(NEW_N)
clean:
	$(RM) $(OBJS)
	$(RM) $(HEADER).gch

fclean: clean
	$(RM) $(NAME) $(NEW_N) $(NEW_H)

re: fclean all

.PHONY: all clean fclean re
