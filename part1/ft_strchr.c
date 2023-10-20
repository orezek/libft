/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:31:12 by orezek            #+#    #+#             */
/*   Updated: 2023/10/20 10:08:41 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strchr(const char *string, int c)
{
	char	*ptr;

	ptr = string;
	if (c == '\0')
		return (string + ft_strelen(string) + 1);
	while (*string)
	{
		if (*string == c)
			return (string);
		string++;
	}
	return (NULL);
}
