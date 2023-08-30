#===========[ VARIABLE ]============#
#
CC = gcc
NAME = pushlibftprintf
CFLAGS = -Wall -Werror -Wextra
SRCS = push_swap_check.c
SRC = $(addprefix src/, $(SRCS))
OBJ = $(SRC:.c=.o)
#
#=========[ EXPECTED_FILES ]=========#
#
EXPECTED_FILES = c h
EXPECTED_FILES_REPO1 = push_swap.c|push_swap_check.c
EXPECTED_FILES_REPO2 = push_swap.h
EXPECTED_FILES_REPO3 = .c .h|Makefile
EXPECTED_FILES_REPO4 = pdf
#
#==========[ REPOSITORIES ]==========#
#
REPO1 = src
REPO2 = include
#REPO3 = ft_printf
#REPO4 = test_uwu
#
#===========[ CHECK_CMD ]===========#
#
UNEXPECTED_FILES_CMD = $(shell ls -1 | grep -vEw 'Makefile|include|ft_printf|src')
UNEXPECTED_FILES_CMD_REPO1 = $(shell ls -1 $(REPO1) | grep -vEw '$(EXPECTED_FILES_REPO1)')
UNEXPECTED_FILES_CMD_REPO2 = $(shell ls -1 $(REPO2) | grep -vEw '$(EXPECTED_FILES_REPO2)')
UNEXPECTED_FILES_CMD_REPO3 = $(shell ls -1 $(REPO3) | grep -vE '$(EXPECTED_FILES_REPO3)')
UNEXPECTED_FILES_CMD_REPO4 = $(shell ls -1 $(REPO4) | grep -vE '$(EXPECTED_FILES_REPO4)')
#
#=============[ Custom ]============#
#								    #
DEF			= \033[0m#			    #
ROUGE 		= \033[38;2;255;0;0m#   #
VERT 		= \033[38;2;0;255;0m#   #
JAUNE 		= \033[33m#			    #
BLEU 		= \033[34m#			    #
MAGENTA 	= \033[38;2;255;38;253m##	
ROSE 	    = \033[38;2;255;155;254m#
CYAN		= \033[36m#			    #
BLANC		= \033[37m#			    #
NOIR		= \033[30m#				#
#								    #
BG_ROUGE 	= \033[41m#			    #
BG_BLANC	= \033[47m#				#
#									#
GRAS		= \033[1m#				#
SOULIGNE	= \033[4m#				#
ITALIQUE	= \033[3m#				#
#									#
SPEED		= 0.05#					#
SLEEP_SPEED = 0.1#					#
SLEEP_SPD_X = 0.05#					#
SLEEP_TEST  = 0.01#					#
FLASH_SPEED = 0.08#					#
#									#
V			= \xE2\x9C\x93# 	(✓)	#
WARNING		= \xE2\x9A\xA0# 	(⚠)	#
X 			= \xE2\x9C\x97# 	(✗)	#
PROCESS		= \xF0\x9F\x94\x84# (🔄)#
#									#
#===================================#
#
#

$(NAME) :
	@make -C ft_printf
	@gcc $(CFLAGS) $(SRC) -o $(NAME) libftprintf.a
	@sleep $(SLEEP_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(VERT)$(V) compilation OK$(DEF)"

all : $(NAME)

%.o : %.c
	@$(CC) -c $< $(CFLAGS) -I./include -o $@
	
#
#===========================================#
#
#
COMPILE        = printf "$(JAUNE)$(PROCESS) " && \
		sleep $(SPEED) && \
		printf "c" && \
		sleep $(SPEED) && \
		printf "o" && \
		sleep $(SPEED) && \
		printf "m" && \
		sleep $(SPEED) && \
		printf "p" && \
		sleep $(SPEED) && \
		printf "i" && \
		sleep $(SPEED) && \
		printf "l" && \
		sleep $(SPEED) && \
		printf "a" && \
		sleep $(SPEED) && \
		printf "t" && \
		sleep $(SPEED) && \
		printf "i" && \
		sleep $(SPEED) && \
		printf "o" && \
		sleep $(SPEED) && \
		printf "n" && \
		sleep $(SPEED) && \
		printf " " && \
		sleep $(SPEED) && \
		printf "p" && \
		sleep $(SPEED) && \
		printf "r" && \
		sleep $(SPEED) && \
		printf "o" && \
		sleep $(SPEED) && \
		printf "c" && \
		sleep $(SPEED) && \
		printf "e" && \
		sleep $(SPEED) && \
		printf "s" && \
		sleep $(SPEED) && \
		printf "s" && \
		sleep $(SPEED) && \
		printf "." && \
		sleep $(SPEED) && \
		printf "." && \
		sleep $(SPEED) && \
		printf ".\033[0m\n" 
#
#
#=================[ CHECK_FILES ]=================#
#
CHECK_PROGRESS 		= printf "$(JAUNE)$(PROCESS) " && \
		sleep $(SPEED) && \
		printf "C" && \
		sleep $(SPEED) && \
		printf "h" && \
		sleep $(SPEED) && \
		printf "e" && \
		sleep $(SPEED) && \
		printf "c" && \
		sleep $(SPEED) && \
		printf "k" && \
		sleep $(SPEED) && \
		printf "i" && \
		sleep $(SPEED) && \
		printf "n" && \
		sleep $(SPEED) && \
		printf "g" && \
		sleep $(SPEED) && \
		printf " " && \
		sleep $(SPEED) && \
		printf "f" && \
		sleep $(SPEED) && \
		printf "o" && \
		sleep $(SPEED) && \
		printf "r" && \
		sleep $(SPEED) && \
		printf " " && \
		sleep $(SPEED) && \
		printf "u" && \
		sleep $(SPEED) && \
		printf "n" && \
		sleep $(SPEED) && \
		printf "e" && \
		sleep $(SPEED) && \
		printf "x" && \
		sleep $(SPEED) && \
		printf "p" && \
		sleep $(SPEED) && \
		printf "e" && \
		sleep $(SPEED) && \
		printf "c" && \
		sleep $(SPEED) && \
		printf "t" && \
		sleep $(SPEED) && \
		printf "e" && \
		sleep $(SPEED) && \
		printf "d" && \
		sleep $(SPEED) && \
		printf " " && \
		sleep $(SPEED) && \
		printf "f" && \
		sleep $(SPEED) && \
		printf "i" && \
		sleep $(SPEED) && \
		printf "l" && \
		sleep $(SPEED) && \
		printf "e" && \
		sleep $(SPEED) && \
		printf "/" && \
		sleep $(SPEED) && \
		printf "r" && \
		sleep $(SPEED) && \
		printf "e" && \
		sleep $(SPEED) && \
		printf "p" && \
		sleep $(SPEED) && \
		printf "o" && \
		sleep $(SPEED) && \
		printf "s" && \
		sleep $(SPEED) && \
		printf "i" && \
		sleep $(SPEED) && \
		printf "t" && \
		sleep $(SPEED) && \
		printf "o" && \
		sleep $(SPEED) && \
		printf "r" && \
		sleep $(SPEED) && \
		printf "y" && \
		sleep $(SPEED) && \
		printf "." && \
		sleep $(SPEED) && \
		printf "." && \
		sleep $(SPEED) && \
		printf ".\n" && \
		sleep $(SLEEP_SPEED)
#
#===========================================#
#
check-unexpected-files :
	@echo "\n"
	@$(CHECK_PROGRESS)
	@printf '\033[1A\033[K'
	@echo "\033[34m========[ CHECK ]========\n\n"
ifeq ($(strip $(UNEXPECTED_FILES_CMD)),)
	@sleep $(SLEEP_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(VERT)$(V) No unexpected f/r in current repository$(DEF)"
	@sleep $(SLEEP_SPEED)
else
	@sleep $(SLEEP_SPD_X)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in current repository:$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(X) unexpected f/r in current repository:$(DEF) $(BG_BLANC)$(NOIR)$(UNEXPECTED_FILES_CMD)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in current repository:$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(X) unexpected f/r in current repository:$(DEF) $(BG_BLANC)$(NOIR)$(UNEXPECTED_FILES_CMD)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in current repository:$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD)$(DEF)"
endif
ifeq ($(strip $(UNEXPECTED_FILES_CMD_REPO1)),)
	@sleep $(SLEEP_SPEED)
	@echo "$(VERT)$(V) No unexpected f/r in $(REPO1)$(DEF)"
	@sleep $(SLEEP_SPEED)
else
	@sleep $(SLEEP_SPD_X)
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in $(REPO1):$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD_REPO1)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(X) unexpected f/r in $(REPO1):$(DEF) $(BG_BLANC)$(NOIR)$(UNEXPECTED_FILES_CMD_REPO1)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in $(REPO1):$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD_REPO1)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(X) unexpected f/r in $(REPO1):$(DEF) $(BG_BLANC)$(NOIR)$(UNEXPECTED_FILES_CMD_REPO1)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in $(REPO1):$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD_REPO1)$(DEF)"
endif
ifeq ($(strip $(UNEXPECTED_FILES_CMD_REPO2)),)
	@sleep $(SLEEP_SPEED)
	@echo "$(VERT)$(V) No unexpected f/r in $(REPO2)$(DEF)"
	@sleep $(SLEEP_SPEED)
else
	@sleep $(SLEEP_SPD_X)
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in $(REPO2):$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD_REPO2)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(X) unexpected f/r in $(REPO2):$(DEF) $(BG_BLANC)$(NOIR)$(UNEXPECTED_FILES_CMD_REPO2)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in $(REPO2):$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD_REPO2)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(X) unexpected f/r in $(REPO2):$(DEF) $(BG_BLANC)$(NOIR)$(UNEXPECTED_FILES_CMD_REPO2)$(DEF)"
	@sleep $(FLASH_SPEED)
	@printf '\033[1A\033[K'
	@echo "$(GRAS)$(ROUGE)$(X) unexpected f/r in $(REPO2):$(DEF) $(BG_ROUGE)$(UNEXPECTED_FILES_CMD_REPO2)$(DEF)"
endif
#
#=============================================#
#
clean :
	@rm -rf $(OBJ)
#	@make clean -C ft_printf
#	@echo "$(VERT)$(V) cleaning OK$(DEF)"

fclean : clean
	@rm -rf $(NAME)
	@make fclean -C ft_printf
#	@echo "$(VERT)$(V) fcleaning OK$(DEF)"

re : fclean all

re_silent :
	@make re --silent

silent :
	@make --silent

check : check-unexpected-files
	@make check -C ft_printf

big :
	@make fclean --silent
	@make check
#	@$(COMPILE)
	@make silent

.PHONY: all clean fclean re silent check big re_silent libftprintf.a