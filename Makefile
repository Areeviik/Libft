SRCS	= 	$(shell find "." -name "*.c" ! -name "ft_lst*.c")

OBJS	= $(SRCS:.c=.o)

BONUS	=	$(shell find "." -name "ft_lst*.c")

BONUS_OBJS = $(BONUS:.c=.o)

CC		= gcc

RM 		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I.

NAME	= libft

.c.o : 
			$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME):	
			$(CC) -c $(SRCS)
			ar rc libft.a $(OBJS)
			ranlib libft.a

bonus:		$(BONUS_OBJS)
			ar rc libft.a $(BONUS_OBJS)

all:		$(NAME)


clean:
			$(RM) $(OBJS)
			$(RM) libft.a
			$(RM) $(BONUS_OBJS)

fclean: 	clean
			$(RM) $(NAME)

.PHONY: 	all clean fclean re bonus .c.o

re:		clean fclean $(NAME)



