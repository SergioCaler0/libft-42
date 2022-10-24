# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scalero- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 08:53:18 by scalero-          #+#    #+#              #
#    Updated: 2022/10/24 14:19:47 by scalero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

HEADERNAME	= libft.h

RM	= rm -rf

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror -c

AR	= ar

ARFLAGS	= -r -c -s

SRCS	= ft_isalpha.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)	$(HEADERNAME)
	@${AR}	${ARFLAGS}	$(NAME)	${OBJS}

#bonus: all $(BONUSOBJS)
#	$(AR) $(ARFLAGS) $(NAME) $(BONUSOBJS)

clean:
	@${RM} ${OBJS}

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

%.o: %.c $(HEADERNAME)

	@${CC} ${CFLAGS} $< -o ${<:.c=.o}

.PHONY: all clean fclean bonus re so

