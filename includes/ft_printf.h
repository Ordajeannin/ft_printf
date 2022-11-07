/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:23:02 by ajeannin          #+#    #+#             */
/*   Updated: 2022/10/07 14:55:09 by ajeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char conv);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long int ptr);
int		ft_print_nbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexa(unsigned long int n, const char conv);
int		ft_print_percent(void);

int		ft_reput_ptrvalue_in_hexa(unsigned long int nbr);
char	*ft_uitoa(unsigned int n);
int		ft_nbr_len(unsigned int n);
int		ft_put_in_hexa(unsigned long int nbr, char *hexa);

#endif
