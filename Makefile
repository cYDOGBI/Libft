# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 11:56:18 by tlaranje          #+#    #+#              #
#    Updated: 2025/11/14 14:50:24 by tlaranje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# === Name ===
NAME		:= libft.a

# === Directories ===
OBJ_DIR		:= obj

# === Source files ===
FT_IS		:= $(wildcard ./ft_is/*.c)
FT_LST		:= $(wildcard ./ft_lst/*.c)
FT_MEM		:= $(wildcard ./ft_mem/*.c)
FT_NBR		:= $(wildcard ./ft_nbr/*.c)
FT_PRINTF	:= $(wildcard ./ft_printf/*.c)
FT_PUT_FD	:= $(wildcard ./ft_put_fd/*.c)
FT_STR		:= $(wildcard ./ft_str/*.c)
SRC			:= $(FT_IS) $(FT_LST) $(FT_MEM) $(FT_NBR) $(FT_PRINTF) \
				$(FT_PUT_FD) $(FT_STR)

# === Object files ===
OBJS		:= $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))

# === Commands ===
CC			:= cc
RM			:= rm -rf
AR			:= ar rcs

# === Flags ===
CFLAGS		:= -Wall -Wextra -Werror -I.

# === Build targets ===
all: $(NAME)

# Create obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compile .c files into .o files
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Create static library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Remove object files
clean:
	$(RM) $(OBJ_DIR)

# Remove executables and object files
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

# Phony targets that do not correspond to real files
.PHONY: all clean fclean re
