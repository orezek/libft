/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:41 by orezek            #+#    #+#             */
/*   Updated: 2023/10/20 20:11:20 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	strlen;

	strlen = ft_strlen(s);
	newstr = malloc((strlen + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (*s)
	{
		*newstr = *s;
		s++;
		newstr++;
	}
	*newstr = '\0';
	return (newstr - strlen);
}
