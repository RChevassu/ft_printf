/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchevass <rchevass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:05:52 by rchevass          #+#    #+#             */
/*   Updated: 2018/10/04 21:57:11 by rchevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# define BUFF_SIZE 500

typedef struct	s_flags{
	int			left;
	int			sign;
	int			zero;
	int			space;
	int			hashtag;
}				t_flags;

typedef struct	s_env{
	int			precision;
	int			width;
	int			size;
	int			type;
	char		buffer[BUFF_SIZE];
	int			index;
	int			last_index;
	int			pointeur;
	t_flags		flags;
}				t_env;

int				parse_flags(const char **format, t_env *env);
void			parse_width(const char **format, va_list args, t_env *env);
void			parse_precision(const char **format, va_list args, t_env *env);
void			parse_size(const char **format, t_env *env);
int				parse_type(const char **format,
					va_list args, t_env *env, char *s);

void			ft_append_char_buffer(t_env *env, char c);
int				ft_append_str_buffer(t_env *env, const char *str, int len);
void			ft_fill_buffer(t_env *env, char c, int len);
void			ft_itobuffer_base(t_env *env, uintmax_t nb,
					uintmax_t base, int maj);
void			ft_itobuffer(t_env *env, intmax_t nb);
void			ft_print_until(t_env *env, char *str, int len);
void			ft_putwchar(t_env *env, wchar_t c);

uintmax_t		ft_uresize(va_list args, t_env *env);
intmax_t		ft_resize(va_list args, t_env *env);
int				ft_numlen_base(uintmax_t num, int base);
int				ft_wcharlen(wchar_t c);

int				ft_print_c(t_env *env, va_list args);
int				ft_print_cm(t_env *env, va_list args);
int				ft_print_d(t_env *env, va_list args);
int				ft_print_x(t_env *env, va_list args);
int				ft_print_xm(t_env *env, va_list args);
int				ft_print_s(t_env *env, va_list args);
int				ft_print_sm(t_env *env, va_list args);
int				ft_print_o(t_env *env, va_list args);
int				ft_print_om(t_env *env, va_list args);
int				ft_print_dm(t_env *env, va_list args);
int				ft_print_u(t_env *env, va_list args);
int				ft_print_um(t_env *env, va_list args);
int				ft_print_p(t_env *env, va_list args);
int				ft_print_i(t_env *env, va_list args);
int				ft_print_f(t_env *env, va_list args);
int				ft_print_fm(t_env *env, va_list args);
int				ft_print_invalid(t_env *env);

#endif
