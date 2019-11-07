# Lib C / ft_Printf / Miniprintf

| Is (8) | Conv (9) | Mem (9) | Print (14) | Str (43) | Int (3) | List (25) | BTree (8) |
|:-------|:---------|:--------|:-----------|:---------|:--------|:----------|:----------|
| [isalnum](src/libft/is/ft_isalnum.c) | [atoi](src/libft/conv/ft_atoi.c) | [bzero](src/libft/mem/ft_bzero.c) | [printtab_nb](src/libft/print/ft_printtab_nb.c) | [strcat](src/libft/str/ft_strcat.c) | [intlen](src/libft/int/ft_intlen.c) | [cr_elem](src/libft/ft_create_elem.c) | [b_app_infix](src/libft/btree/btree_apply_infix.c) |
| [isalpha](src/libft/is/ft_isalpha.c) | [atol](src/libft/conv/ft_atol.c) | [memalloc](src/libft/mem/ft_memalloc.c) | [printtab_str](src/libft/print/ft_printtab_str.c) | [strchr](src/libft/str/ft_strchr.c) | [longlen](src/libft/int/ft_longlen.c) | [cr_elem_int](src/libft/lst/ft_create_elem_int.c) | [b_app_prefix](src/libft/btree/btree_apply_prefix.c) |
| [isascii](src/libft/is/ft_isascii.c) | [dtoa](src/libft/conv/ft_dtoa.c) | [memccpy](src/libft/mem/ft_memccpy.c) | [putchar](src/libft/print/ft_putchar.c) | [strclen](src/libft/str/ft_strclen.c) | [pow](src/libft/int/ft_pow.c) | [list_p_back](src/libft/lst/ft_list_push_back.c) | [b_app_suffix](src/libft/btree/btree_apply_suffix.c) |
| [isblank](src/libft/is/ft_isblank.c) | [itoa](src/libft/conv/ft_itoa.c) | [memchr](src/libft/mem/ft_memchr.c) | [putchar_fd](src/libft/print/ft_putchar_fd.c) | [strclen](src/libft/str/ft_strclen.c) || [list_p_back_int](src/libft/lst/ft_list_push_back_int.c) | [b_cr_node](src/libft/btree/btree_create_node.c) |
| [iscntrl](src/libft/is/ft_iscntrl.c) | [lltoa](src/libft/conv/ft_lltoa.c) | [memcmp](src/libft/mem/ft_memcmp.c) | [putcharerr](src/libft/print/ft_putcharerr.c) | [strclr](src/libft/str/ft_strclr.c) || [list_p_front](src/libft/lst/ft_list_push_front.c) | [b_lvl_count](src/libft/btree/btree_lvl_count.c) |
| [isdigit](src/libft/is/ft_isdigit.c) | [lltoabase_+](src/libft/conv/ft_lltoabase_signed.c) | [memcpy](src/libft/mem/ft_memcpy.c) | [putendl](src/libft/print/ft_putendl.c) | [strcmp](src/libft/str/ft_strcmp.c) || [list_p_front_int](src/libft/lst/ft_list_push_front_int.c) | [b_insert_data](src/libft/btree/btree_insert_data.c) |
| [isgraph](src/libft/is/ft_isgraph.c) | [lltoabase](src/libft/conv/ft_lltoabase_signless.c) | [memdel](src/libft/mem/ft_memdel.c) | [putendl_fd](src/libft/print/ft_putendl_fd.c) | [strcpy](src/libft/str/ft_strcpy.c) || [list_size](src/libft/lst/ft_list_size.c) | [b_int_cmp](src/libft/btree/btree_int_cmp.c) |
| [isprint](src/libft/is/ft_isprint.c) | [lltoabase_u](src/libft/conv/ft_lltoabase_unsigned.c) | [memmove](src/libft/mem/ft_memmove.c) | [putendlerr](src/libft/print/ft_putendlerr.c) | [strdel](src/libft/str/ft_strdel.c) || [list_last](src/libft/lst/ft_list_last.c) | [b_print](src/libft/btree/btree_print.c) |
| | [ltoa](src/libft/conv/ft_ltoa.c) | [memset](src/libft/mem/ft_memset.c) | [putnbr](src/libft/print/ft_putnbr.c) | [strdup](src/libft/str/ft_strdup.c) || [list_rm_last](src/libft/lst/ft_list_remove_last.c) ||
| | | | [putnbr_fd](src/libft/print/ft_putnbr_fd.c) | [strdupd](src/libft/str/ft_strdupd.c) || [list_rm_first](src/libft/lst/ft_list_remove_first.c) ||
| | | | [putnbrerr](src/libft/print/ft_putnbrerr.c) | [strequ](src/libft/str/ft_strequ.c) || [list_rm_middle](src/libft/lst/ft_list_remove_middle.c) ||
| | | | [putstr](src/libft/print/ft_putstr.c) | [strfill](src/libft/str/ft_strfill.c) || [list_p_params](src/libft/lst/ft_list_push_params.c) ||
| | | | [putstr_fd](src/libft/print/ft_putstr_fd.c) | [striter](src/libft/str/ft_striter.c) || [list_clear](src/libft/lst/ft_list_clear.c) ||
| | | | [putstrerr](src/libft/print/ft_putstrerr.c) | [striteri](src/libft/str/ft_striteri.c) || [list_clear_data](src/libft/lst/ft_list_clear_data.c) ||
| | | | | [strjoin](src/libft/str/ft_strjoin.c) || [list_at](src/libft/lst/ft_list_at.c) |
| | | | | [strjoind](src/libft/str/ft_strjoind.c) || [list_reverse](src/libft/lst/ft_list_reverse.c) |
| | | | | [strdjoind](src/libft/str/ft_strdjoind.c) || [list_foreach](src/libft/lst/ft_list_foreach.c) |
| | | | | [strlcat](src/libft/str/ft_strlcat.c) || [list_print](src/libft/lst/ft_list_print.c) |
| | | | | [strlen](src/libft/str/ft_strlen.c) || [lstadd](src/libft/lst/ft_lstadd.c) |
| | | | | [strmap](src/libft/str/ft_strmap.c) || [lstdel](src/libft/lst/ft_lstdel.c) |
| | | | | [strmapi](src/libft/str/ft_strmapi.c) || [lstdelone](src/libft/lst/ft_lstdelone.c) |
| | | | | [strncat](src/libft/str/ft_strncat.c) || [lstiter](src/libft/lst/ft_lstiter.c) |
| | | | | [strncmp](src/libft/str/ft_strncmp.c) || [lstmap](src/libft/lst/ft_lstmap.c) |
| | | | | [strncpy](src/libft/str/ft_strncpy.c) || [lstnew](src/libft/lst/ft_lstnew.c) |
| | | | | [strnequ](src/libft/str/ft_strnequ.c) || [lstlen](src/libft/lst/ft_lstlen.c) |
| | | | | [strnew](src/libft/str/ft_strnew.c) |||
| | | | | [strnstr](src/libft/str/ft_strnstr.c) |||
| | | | | [strrchr](src/libft/str/ft_strrchr.c) |||
| | | | | [strsplit](src/libft/str/ft_strsplit.c) |||
| | | | | [strstr](src/libft/str/ft_strstr.c) |||
| | | | | [strsub](src/libft/str/ft_strsub.c) |||
| | | | | [strsub_2](src/libft/str/ft_strsub_leakless.c) |||
| | | | | [strtok](src/libft/str/ft_strtok.c) |||
| | | | | [strtoupper_2](src/libft/str/ft_strtoupper_leakless.c) |||
| | | | | [strtrim](src/libft/str/ft_strtrim.c) |||
| | | | | [tolower](src/libft/str/ft_tolower.c) |||
| | | | | [toupper](src/libft/str/ft_toupper.c) |||
| | | | | [strrev_2](src/libft/str/ft_strrev_leakless.c) |||
| | | | | [stradd_2](src/libft/str/ft_stradd_leakless.c) |||
| | | | | [intlen](src/libft/int/ft_intlen.c) |||
| | | | | [longlen](src/libft/int/ft_longlen.c) |||
| | | | | [pow](src/libft/int/ft_pow.c) |||
| | | | | [strfindc](src/libft/str/ft_strfindc.c) |||
