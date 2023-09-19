# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 16:44:07 by smarco            #+#    #+#              #
#    Updated: 2022/10/15 13:09:00 by smarco           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a

RM = rm -f

INCLUDE = -I ./

HEADER = libft.h
# ici on définit les modules sources de notre projet, séparés par un espace
SRC =		ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_striteri.c ft_check.c ft_hexa.c ft_putchar.c ft_printf.c \
		ft_putstr.c ft_putchar.c ft_putnbr.c ft_void.c ft_unsigned.c

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -crs $(NAME) $(OBJ)

.PHONY: all clean fclean re

clean:
	rm -f $(OBJ) $(OBJ_B)
	@echo "\n\t... Suppression des objets...\n"

fclean: clean
	rm -f $(NAME) .bonus
	@echo "\t... suppression lib et bonus...\n"

re: fclean all


#$(OBJ): $(SRC)
#	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

#.PHONY: all clean fclean re

# cette ligne génère automatiquement les noms des modules objets à partir des modules sources, par exemple main.c deviendra main.o, etc
#OBJ = $(SRC:.c=.o)

# ici on définit le nom de l'exécutable final
#NAME = libt.a

# cette ligne décrit la génération des modules objets à partir des modules sources, le symbole *.h signifiant qu'on souhaite recompiler tous les modules en cas de changement d'un entête.
#%.o: %.c
#	$(CC) $(CFLAGS) -c $(<) -o $(@)
#le $(<) désigne le fichier .c, alors que le $(@) désigne le fichier .o

# par défaut, make cherche une cible appelée "all", on lui dit ici qu'elle correspond à "compile"
#all: $(NAME)

# ici, on prévient make que "compile" est équivalent au nom de notre exécutable
#compile: $(NAME)

# cette ligne définit la compilation de notre exécutable, en fonction des fichiers sources modifiés (ceux qui n'ont pas été modifiés ne seront pas recompilés)
#$(NAME): $(OBJ)
#	$(CC) $(OBJ) $(LFLAGS) -o $(NAME)

# ici on définit une cible "strip", pour retirer les informations de débogage de notre exécutable, qui devient donc plus compact (utile pour les release)
#strip: $(NAME)
#	strip --strip-all $(NAME)

# ici, on fait le ménage, en supprimant tous les fichiers objets ainsi que l'exécutable, sans supprimer ceux des autres projets, pour les étourdis qui mettent tout dans le même répertoire (on ne fait donc pas un simple del *.o)
#clean:
#	del $(OBJ)
#	del $(NAME)
