/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 16:59:45 by alukyane          #+#    #+#             */
/*   Updated: 2017/10/24 16:59:47 by alukyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# define ABS(v) ((v) < 0 ? -(v) : (v))

typedef	struct		s_printf
{
	int		res;
	int		curr;
	char	*flag;
	int		width;
	int		prec;
	char	*spec;
	char	type;
	int		dot;
	int		star;
}					t_printf;
typedef	struct		s_unichar
{
	int		*arr_ind;
	int		len;
	char	*new_s;
}					t_unichar;
char				*ft_allupper(char *str, int len);
char				*ft_strrev(char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_atoi(const char *str);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_itoa(long long int n);
char				*ft_itoa_base(unsigned long long int value, int base);
char				*ft_itoa_u(unsigned long long int n);
void				ft_print_end(int i, int len, int tmp, char c);
void				ft_putchar(char c);
void				ft_putnbr(long long int n);
void				ft_putnbr_u(unsigned long long int nb);
int					ft_get_data(const char *format, t_printf *var, va_list ap);
t_printf			*process(t_printf *var, const char *f, int c, va_list ap);
t_printf			*ft_output_d(t_printf *var, int len_orig, long long digit);
t_printf			*ft_print_d(t_printf *var, va_list ap);
t_printf			*ft_print_u(t_printf *var, va_list ap);
t_printf			*ft_check_pos_o(t_printf *var);
t_printf			*ft_align_o(t_printf *var, char *str, int len, int len_or);
t_printf			*ft_output_o(t_printf *var, char *str);
t_printf			*ft_print_o(t_printf *var, va_list ap);
t_printf			*ft_print_b(t_printf *var, va_list ap);
t_printf			*ft_pos_x(t_printf *var, char *str, int len, int len_orig);
int					out_x(t_printf *var, char *str, int len, int len_origin);
t_printf			*ft_print_x(t_printf *var, va_list ap);
int					ft_btod(char *str);
int					ft_count_bytes(int chr);
char				*ft_make_wchar(char *str, int l, int bytes);
t_printf			*ft_print_c_w(t_printf *var, va_list ap);
t_printf			*ft_print_c(const char *format, t_printf *var, va_list ap);
t_printf			*ft_print_s_s(t_printf *var, va_list ap);
t_printf			*ft_check_align_s(t_printf *var, char *str, int len_origin);
t_printf			*ft_print_s_w(t_printf *var, va_list ap);
t_printf			*ft_print_s(t_printf *var, va_list ap);
t_printf			*ft_print_nbr(t_printf *var, va_list ap);
t_printf			*ft_print_str(const char *form, t_printf *var, va_list ap);
int					ft_printf(const char *format, ...);
#endif
