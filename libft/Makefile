# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wayl <wayl@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 03:11:13 by wayl              #+#    #+#              #
#    Updated: 2024/09/15 03:11:25 by wayl             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# -------------------------------- VARIABLES --------------------------------- #

#Nom de la bibliotheque
NAME = libft.a

#ficher d'en-tete
HEAD = libft.h

#Compilateur et option de compilation
CC = cc
CFLAGS = -Wall -Werror -Wextra

RED      = '\033[0;31m'
GREEN    = '\033[0;32m'
YELLOW   = '\033[0;33m'
BLUE     = '\033[0;34m'
PURPLE   = '\033[0;35m'
NC       = '\033[0m'

#listes des fichier sources
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strlcpy.c\
       	ft_strlen.c \
	ft_strncmp.c\
       	ft_tolower.c\
       	ft_toupper.c\
       	ft_memcpy.c\
       	ft_memmove.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_calloc.c\
	ft_itoa.c\
	ft_putstr_fd.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_substr.c\
	ft_strnstr.c\
	ft_striteri.c\
	ft_strmapi.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strlcat.c\
	ft_split.c\
	ft_lstdelone_bonus.c\
	ft_lstiter_bonus.c\
	ft_lstclear_bonus.c\
	ft_lstmap_bonus.c\
	function/ft_flagchar.c\
       function/ft_flagpercent.c\
       function/ft_flagstring.c\
       function/ft_putnbr_fd.c\
       function/ft_put_unsigned_nbr_fd.c\
       function/ft_flagint.c\
       function/ft_flagunsignedint.c\
       function/ft_puthexa.c\
       function/ft_strlen.c\
       function/ft_bzero.c\
       function/ft_flaghexa.c\
       function/ft_puthexa2.c\
       function/ft_indicehexa.c\
       function/ft_flagp.c\
       ft_printf.c\
       get_next_line/get_next_line.c\
       get_next_line/get_next_line_utils.c

SRCBONUS = ft_lstnew_bonus.c\
	   ft_lstadd_front_bonus.c\
	   ft_lstsize_bonus.c\
	   ft_lstlast_bonus.c\
	   ft_lstadd_back_bonus.c\
	   ft_lstdelone_bonus.c

# ---------------------------------- RULES ----------------------------------- #

# Liste des fichiers objets (générés automatiquement à partir des fichiers sources)
OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

# Options pour l'archiveur
AR = ar		#archiver
ARFLAGS = -rc	#-r inserer les fichier dans l'archive /   -c cree larchive si elle nexiste pas

# Création de la bibliothèque
all: $(NAME)

# Cible par défaut
$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $^
	@echo $(BLUE)✅ $@  build successful! $(NC)


# Règle pour compiler les fichiers objets
%.o: %.c
	@$(CC) -c $< -o $@
	@echo $(BLUE)✅ $< compiled! $(NC)

# Suppression des fichiers objets
clean :
	@rm -f $(OBJ)
	@echo $(BLUE)🗑️ libft/*.o deleted! $(NC)


# Suppression des fichiers objets et de la bibliothèque
fclean : clean
	@rm  -f $(NAME)
	@echo $(BLUE)🗑️  $(NAME) $(OBJECTS) $(LIBFT) deleted! $(NC)


# Reconstruction complète
re :	fclean all

bonus : $(OBJ) $(OBJBONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ) $(OBJBONUS)

# Indiquer à make que ces cibles ne sont pas des fichiers
.PHONY : all bonus clean fclean re
