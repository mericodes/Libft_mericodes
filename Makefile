# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 15:57:28 by mlopez-i          #+#    #+#              #
#    Updated: 2023/09/26 20:51:49 by mlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_MAND	=	ft_atoi.c			\
				ft_bzero.c			\
				ft_calloc.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_itoa.c			\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_memset.c			\
				ft_putchar_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_putstr_fd.c		\
				ft_split.c			\
				ft_strchr.c			\
				ft_strdup.c			\
				ft_striteri.c		\
				ft_strjoin.c		\
				ft_strlcat.c		\
				ft_strlcpy.c		\
		  		ft_strlen.c			\
				ft_strmapi.c		\
		  		ft_strncmp.c		\
				ft_strnstr.c		\
				ft_strrchr.c		\
				ft_strtrim.c		\
				ft_substr.c			\
		  		ft_tolower.c		\
		  		ft_toupper.c		\

OBJS_MAND	= ${SRCS_MAND:.c=.o}

CC		= cc

CFLAGS 	= -Wall -Werror -Wextra

RM		= rm -rf

AR		= ar rcs

HEADER = libft.h

all	:	$(NAME)
		@echo Compiling mandatory part of "libft.a": $@ ...

$(NAME)	:	$(OBJS_MAND)
		@echo Compiling library file: $@ ...
		$(AR) $(NAME) $(OBJS_MAND)

%.o:	%.c $(HEADER) Makefile
		@echo Compiling files: $@ ...
		$(CC) $(CFLAGS) -c $< -o $@ 

clean	:	
		@echo Cleaning object files: $@ ...
		$(RM) $(OBJS_MAND)


fclean	:	clean
		@echo Cleaning object files and libft.a:
		$(RM) $(NAME)

re	:	fclean all
		@echo Cleaning object files and libft.a and remake everything:

.PHONY: all clean fclean re