SHELL						=	/bin/zsh

# Executable name
NAME						=	libft.a

# Compilation mode
WALL						=	yes
WEXTRA						=	yes
WERROR						=	yes
FSANITIZE					=	no
DEBUG						=	no
O2							=	yes

CC							:=	gcc
GEN							:=	"Generation in mode"

ifeq ($(WALL), yes)
	CC						:=	$(CC) -Wall
	GEN						:=	$(GEN) all
endif

ifeq ($(WEXTRA), yes)
	CC						:=	$(CC) -Wextra
	GEN						:=	$(GEN) extra
endif

ifeq ($(WERROR), yes)
	CC						:=	$(CC) -Werror
	GEN						:=	$(GEN) error
endif

ifeq ($(FSANITIZE), yes)
	CC						:=	$(CC) -fsanitize=address
	GEN						:=	$(GEN) sanitize
endif

# Source names
							#	LIBFT
SRC_LIBFT_NAME				=	is/ft_isalnum.c					\
								is/ft_isalpha.c					\
								is/ft_isascii.c					\
								is/ft_isblank.c					\
								is/ft_iscntrl.c					\
								is/ft_isdigit.c					\
								is/ft_isgraph.c					\
								is/ft_isprint.c					\
																\
								conv/ft_atoi.c					\
								conv/ft_atol.c					\
								conv/ft_dtoa.c					\
								conv/ft_itoa.c					\
								conv/ft_ltoa.c					\
								conv/ft_lltoa.c					\
								conv/ft_atolli.c				\
								conv/ft_hexatoi.c				\
								conv/ft_atoi_base.c				\
								conv/ft_atolli_base.c			\
								conv/ft_lltoabase_signed.c		\
								conv/ft_lltoabase_signless.c	\
								conv/ft_lltoabase_unsigned.c	\
																\
								mem/ft_bzero.c					\
								mem/ft_memchr.c					\
								mem/ft_memcmp.c					\
								mem/ft_memcpy.c					\
								mem/ft_memdel.c					\
								mem/ft_memset.c					\
								mem/ft_memmove.c				\
								mem/ft_memccpy.c				\
								mem/ft_memalloc.c				\
																\
								print/ft_printtab_nb.c			\
								print/ft_printtab_str.c			\
																\
								print/ft_putnbr.c				\
								print/ft_putstr.c				\
								print/ft_putchar.c				\
								print/ft_putendl.c				\
								print/ft_putnbrll.c				\
								print/ft_putnbr_fd.c			\
								print/ft_putnbrerr.c			\
								print/ft_putstr_fd.c			\
								print/ft_putstrerr.c			\
								print/ft_putchar_fd.c			\
								print/ft_putcharerr.c			\
								print/ft_putendl_fd.c			\
								print/ft_putendlerr.c			\
																\
								str/ft_strcat.c					\
								str/ft_strchr.c					\
								str/ft_strclr.c					\
								str/ft_strcmp.c					\
								str/ft_strcpy.c					\
								str/ft_strdel.c					\
								str/ft_strdup.c					\
								str/ft_strequ.c					\
								str/ft_strlen.c					\
								str/ft_strmap.c					\
								str/ft_strnew.c					\
								str/ft_strstr.c					\
								str/ft_strsub.c					\
								str/ft_strtok.c					\
								str/ft_is_sep.c					\
								str/ft_strclen.c				\
								str/ft_strdupd.c				\
								str/ft_strfill.c				\
								str/ft_striter.c				\
								str/ft_strjoin.c				\
								str/ft_strlcat.c				\
								str/ft_strmapi.c				\
								str/ft_strncat.c				\
								str/ft_strncmp.c				\
								str/ft_strncpy.c				\
								str/ft_strnequ.c				\
								str/ft_strnstr.c				\
								str/ft_strrchr.c				\
								str/ft_strtrim.c				\
								str/ft_tolower.c				\
								str/ft_toupper.c				\
								str/ft_striteri.c				\
								str/ft_strjoind.c				\
								str/ft_strsplit.c				\
								str/ft_strisnum.c				\
								str/ft_strdjoin.c				\
								str/ft_strfindc.c				\
								str/ft_strdjoind.c				\
								str/ft_strtabdel.c				\
								str/ft_strdjoinc.c				\
								str/ft_strsplit_multi.c			\
								str/ft_strremove_char.c			\
								str/ft_strsub_leakless.c		\
								str/ft_strrev_leakless.c		\
								str/ft_stradd_leakless.c		\
								str/ft_strtoupper_leakless.c	\
																\
								int/ft_pow.c					\
								int/ft_intlen.c					\
								int/ft_longlen.c	 			\
								int/ft_inttabdel.c				\
								int/ft_longlonglen.c			\
																\
								lst/ft_lstadd.c					\
								lst/ft_lstdel.c					\
								lst/ft_lstmap.c					\
								lst/ft_lstnew.c					\
								lst/ft_lstlen.c					\
								lst/ft_list_at.c				\
								lst/ft_lstiter.c				\
								lst/ft_list_size.c				\
								lst/ft_list_last.c				\
								lst/ft_lstdelone.c				\
								lst/ft_list_clear.c				\
								lst/ft_list_print.c				\
								lst/ft_create_elem.c			\
								lst/ft_list_reverse.c			\
								lst/ft_list_foreach.c			\
								lst/ft_list_push_back.c			\
								lst/ft_list_clear_data.c		\
								lst/ft_create_elem_int.c		\
								lst/ft_list_push_front.c		\
								lst/ft_list_remove_last.c		\
								lst/ft_list_push_params.c		\
								lst/ft_list_remove_first.c		\
								lst/ft_list_push_back_int.c		\
								lst/ft_list_remove_middle.c		\
								lst/ft_list_push_front_int.c	\
																\
								btree/btree_free.c				\
								btree/btree_print.c				\
								btree/btree_int_cmp.c			\
								btree/btree_lvl_count.c			\
								btree/btree_apply_infix.c		\
								btree/btree_create_node.c		\
								btree/btree_insert_data.c		\
								btree/btree_apply_prefix.c		\
								btree/btree_apply_suffix.c		\
																\
								get_next_line.c

							#	FT_PRINTF
SRC_FT_PRINTF_NAME			=	ft_printf.c						\
								all_for_p.c						\
								ft_printf_c.c					\
								ft_printf_d.c					\
								ft_printf_f.c					\
								ft_printf_o.c					\
								ft_printf_p.c					\
								ft_printf_u.c					\
								ft_printf_s.c					\
								ft_printf_x.c					\
								ft_printf_conv.c				\
								ft_dtoa_printf.c				\
								ft_printf_display.c				\
								ft_printf_no_conv.c				\
								ft_printf_parsing.c				\
								ft_printf_f_suite.c				\
								ft_printf_percent.c				\
								ft_printf_get_conv.c			\
								ft_printf_get_flags.c			\
								ft_printf_get_width.c			\
								ft_printf_get_modifier.c		\
								ft_printf_get_precision.c

							#	MINIPRINTF
SRC_MNPF_NAME				=	ft_csp.c						\
								ft_mod.c						\
								ft_fill.c						\
								ft_accu.c						\
								ft_width.c						\
								ft_diouxx.c						\
								ft_struct.c						\
								miniprintf.c					\
								ft_longlong.c					\
								ft_error_miniprintf.c

# Source, object, include and libft path
OBJ_PATH					=	./obj/
INC_PATH					=	./include/
LDFLAGS						=	./libft/
SRC_LIBFT_PATH				=	./src/libft/
OBJ_LIBFT_PATH				=	./obj/libft/
SRC_MNPF_PATH				=	./src/miniprintf/
OBJ_MNPF_PATH				=	./obj/miniprintf/
SRC_ft_printf_pointerATH	=	./src/ft_printf/
OBJ_ft_printf_pointerATH	=	./obj/ft_printf/

# Source and object
SRC_LIBFT					=	$(addprefix $(SRC_LIBFT_PATH), $(SRC_LIBFT_NAME))
OBJ_LIBFT					=	$(patsubst $(SRC_LIBFT_PATH)%.c, $(OBJ_LIBFT_PATH)%.o, $(SRC_LIBFT))
SRC_MNPF					=	$(addprefix $(SRC_MNPF_PATH), $(SRC_MNPF_NAME))
OBJ_MNPF					=	$(patsubst $(SRC_MNPF_PATH)%.c, $(OBJ_MNPF_PATH)%.o, $(SRC_MNPF))
SRC_FT_PRINTF				=	$(addprefix $(SRC_ft_printf_pointerATH), $(SRC_FT_PRINTF_NAME))
OBJ_FT_PRINTF				=	$(patsubst $(SRC_ft_printf_pointerATH)%.c, $(OBJ_ft_printf_pointerATH)%.o, $(SRC_FT_PRINTF))

# Text format
_DEF						=	$'\033[0m
_GRA						=	$'\033[1m
_SOU						=	$'\033[4m
_CLI						=	$'\033[5m
_SUR						=	$'\033[7m

# Colors
_BLA						=	$'\033[30m
_RED						=	$'\033[31m
_GRE						=	$'\033[32m
_YEL						=	$'\033[33m
_BLU						=	$'\033[34m
_PUR						=	$'\033[35m
_CYA						=	$'\033[36m
_WHI						=	$'\033[37m

# Background
_IBLA						=	$'\033[40m
_IRED						=	$'\033[41m
_IGRE						=	$'\033[42m
_IYEL						=	$'\033[43m
_IBLU						=	$'\033[44m
_IPUR						=	$'\033[45m
_ICYA						=	$'\033[46m
_IWHI						=	$'\033[47m

all: $(NAME)

$(NAME): $(OBJ_LIBFT) $(OBJ_MNPF) $(OBJ_FT_PRINTF)
	@ar rc $(NAME) $(OBJ_LIBFT) $(OBJ_MNPF) $(OBJ_FT_PRINTF)
	@ranlib $(NAME)
	@echo "\n$(GEN)"

$(OBJ_MNPF_PATH)%.o: $(SRC_MNPF_PATH)%.c
	@mkdir -p obj/miniprintf
	@$(CC) -I $(INC_PATH) -o $@ -c $<
	@echo "$(_GRE)[OK]\t\t$(_YEL)COMPILE :$(_DEF)\t$<"

$(OBJ_ft_printf_pointerATH)%.o: $(SRC_ft_printf_pointerATH)%.c
	@mkdir -p obj/ft_printf
	@$(CC) -I $(INC_PATH) -o $@ -c $<
	@echo "$(_GRE)[OK]\t\t$(_YEL)COMPILE :$(_DEF)\t$<"

$(OBJ_LIBFT_PATH)%.o: $(SRC_LIBFT_PATH)%.c
	@mkdir -p obj/libft/is obj/libft/conv obj/libft/str obj/libft/print \
	obj/libft/mem obj/libft/lst obj/libft/btree obj/libft/int
	@$(CC) -I $(INC_PATH) -o $@ -c $<
	@echo "$(_GRE)[OK]\t\t$(_YEL)COMPILE :$(_DEF)\t$<"

clean:
	@rm -rf $(OBJ_PATH) 2> /dev/null || true
	@echo "$(_RED)[OK]\t\t$(_YEL)REMOVE :\t$(_DEF)" $(LDFLAGS)obj/"$(_DEF)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(_RED)[OK]\t\t$(_YEL)REMOVE :\t$(_DEF)" $(LDFLAGS)$(NAME)" $(_DEF)"

re: fclean all

.PHONY: all clean fclean re
