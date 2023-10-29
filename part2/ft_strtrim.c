/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:11 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 14:48:37 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// "abrakadabra" "abra" -> "kad"
// "abrakadabra" "a" -> "brakadabr"

int	is_inside(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*substr;
	int		s_length;
	int		i;
	int		start;

	s_length = ft_strlen(s1);
	while (is_inside(*(s1 + s_length - 1), set))
		s_length--;
	start = 0;
	while (is_inside(*(s1 + start++), set))
		s_length--;
	substr = (char *) malloc(sizeof(char) * (s_length + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	start -= 1;
	while (i++ < s_length)
		*(substr++) = *(s1 + start++);
	*substr = '\0';
	return (substr - s_length);
}
