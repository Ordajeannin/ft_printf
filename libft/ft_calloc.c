/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:26:59 by ajeannin          #+#    #+#             */
/*   Updated: 2021/12/08 17:50:11 by ajeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	full_size;
	void	*dst;

	full_size = size * count;
	dst = (void *)malloc(full_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, full_size);
	return (dst);
}
