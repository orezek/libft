/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:31:12 by orezek            #+#    #+#             */
/*   Updated: 2023/10/31 14:49:08 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	if (c == '\0')
		return ((char *) string + ft_strlen(string));
	while (*string)
	{
		if (*string == c)
			return ((char *) string);
		string++;
	}
	return (NULL);
}
