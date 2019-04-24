/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchevass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:44:46 by rchevass          #+#    #+#             */
/*   Updated: 2017/12/04 13:15:13 by rchevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	c2;

	i = 0;
	p = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == c2)
			return (p + i);
		i++;
	}
	return (NULL);
}
