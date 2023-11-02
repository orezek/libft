/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:58 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 10:20:39 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int				len;
	unsigned char	letter;

	letter = (unsigned char) c;
	len = ft_strlen(string);
	if (letter == '\0')
		return ((char *) string + ft_strlen(string));
	while (len >= 0)
	{
		if (*(string + len) == letter)
			return ((char *) string + len);
		len--;
	}
	return (NULL);
}
