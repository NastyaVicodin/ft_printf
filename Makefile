#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alukyane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 22:31:54 by alukyane          #+#    #+#              #
#    Updated: 2017/10/25 22:31:56 by alukyane         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a
SOURCE =    ft_strlen.c 													\
			ft_strrev.c 													\
            ft_strdup.c 													\
            ft_strcpy.c 													\
            ft_strcmp.c 													\
            ft_strjoin.c 													\
            ft_atoi.c 														\
            ft_strsub.c 													\
            ft_strcat.c 													\
            ft_itoa.c 														\
            ft_itoa_base.c 													\
            ft_putchar.c 													\
            ft_putnbr.c 													\
            ft_printf.c 													\
            ft_get_data.c 													\
            process.c 														\
            ft_output_d.c 													\
            ft_print_d.c 													\
            ft_print_u.c 													\
            ft_align_o.c 													\
            ft_print_o.c 													\
            ft_print_b.c 													\
            ft_print_x.c 													\
            ft_print_c_w.c 													\
            ft_print_c.c 													\
            ft_print_s_w.c 													\
            ft_print_s.c 													\
            ft_itoa_u.c 													\
            ft_putnbr_u.c 													\
            ft_print_nbr.c 													\
            ft_print_str.c 													\
            ft_memalloc.c 													\
            ft_allupper.c 													\
            ft_bzero.c

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

%.o:%.c
	gcc -Wall -Wextra -Werror -o $@ -c $<

$(NAME): $(OBJS)

	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
