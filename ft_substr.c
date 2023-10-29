/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:16 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:55:14 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	int			size;

	size = (int) len;
	if (start > ft_strlen(s) || len > ft_strlen(s))
		return (NULL);
	ptr = malloc(((int)len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	s += (start);
	while (len-- > 0)
		*ptr++ = *s++;
	*ptr = '\0';
	return (ptr - size);
}
