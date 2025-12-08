/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 20:28:59 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/07 20:49:18 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;
	int			i;

	last = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			last = &str[i];
		}
		i++;
	}
	if (str[i] == (char)c)
	{
		last = &str[i];
	}
	return ((char *)last);
}
