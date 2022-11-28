# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 18:32:50 by ftroiter          #+#    #+#              #
#    Updated: 2022/11/28 22:25:21 by ftroiter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit \
					ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove \
					ft_memset ft_split ft_strchr ft_strdup ft_strjoin ft_strlcat ft_strlcpy ft_strlen \
					ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper \
					
OBJS			= $(SRCS:=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

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