/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:55:24 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/15 15:25:01 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t destsize)
{
	size_t	source_len;
	size_t	i;

	source_len = ft_strlen(source);
	if (destsize != '\0')
	{
		while (i < (destsize - 1) && source[i] != '\0')
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (source_len);
}
