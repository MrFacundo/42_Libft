# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 18:32:50 by ftroiter          #+#    #+#              #
#    Updated: 2022/11/05 22:41:28 by ftroiter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
					ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
					ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
					ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c main.c \
					
OBJS			= $(SRCS:.c=.o)

CC				= gcc-10
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
					$(RM) $(NAME)

re:					fclean $(NAME)

.PHONY:			all clean fclean re bonus