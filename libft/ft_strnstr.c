/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchevass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:49:45 by rchevass          #+#    #+#             */
/*   Updated: 2017/12/04 12:04:22 by rchevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *larger, const char *smaller, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (larger[i])
	{
		j = 0;
		while (larger[i + j] == smaller[j] && (i + j) < n && smaller[j])
			j++;
		if (smaller[j] == '\0')
			return ((char *)larger + i);
		i++;
	}
	return (NULL);
}
