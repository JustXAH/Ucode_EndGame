# A simple Makefile for compiling small SDL projects

# set the compiler
CC := clang
INC = inc


# set the compiler flags
FFLAGS = -F ./resource/frameworks -framework SDL2 -rpath ./resource/frameworks \
	 -F ./resource/frameworks -framework SDL2_image -rpath ./resource/frameworks \
	 -F ./resource/frameworks -framework SDL2_ttf -rpath ./resource/frameworks \
	 -F ./resource/frameworks -framework SDL2_mixer -rpath ./resource/frameworks \

CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -Werror
# add header files here
HDRS := inc/header.h \

# add source files here
SRCS := src/main.c \
		src/menu.c \
		src/main_process.c \
		src/print_error.c \
		src/init_game_over.c \
		src/init_stars.c \
		src/load_game.c \
		src/process.c \
		src/collision_detect.c \
		src/process_events.c \
		src/do_render.c \
		src/load_menu.c \
		src/destroy_game.c \
		src/mx_itoa.c \
		src/draw_text.c \
		src/blocks_animation.c \
		src/portals_animation.c \
		src/change_fon.c \
		src/mx_file_to_str.c \
		src/mx_strnew.c \
		src/destroy_menu.c \
		#src/sprite_sheet.c \src/leader.c \


# generate names of object files
# OBJS := $(SRCS:.c=.o)

# name of executable
EXEC := endgame

# default recipe
all: $(EXEC)

# recipe for building the final executable
$(EXEC): $(SRCS) $(INC) Makefile
	@$(CC) $(SRCS) $(CFLAGS) $(FFLAGS) -o $(EXEC) -I $(INC)
	@printf "\r\33[2K $(NAME)\033[33;1m\tcompile\n"

# recipe for building object files
#$(OBJS): $(@:.o=.c) $(HDRS) Makefile
#	$(CC) -o $@ $(@:.o=.c) -c $(CFLAGS)

# recipe to clean the workspace
clean:
	rm -f $(OBJS)
	@printf "Object files - \t\033[31;1mdeleted\033[0m\n"


uninstall: clean
	rm -f $(EXEC)
	@printf "$(NAME)\t\033[31;1muninstalled\n"

reinstall: uninstall all

.PHONY: all clean
