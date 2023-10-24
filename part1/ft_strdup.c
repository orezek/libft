/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:41 by orezek            #+#    #+#             */
/*   Updated: 2023/10/24 13:20:23 by orezek           ###   ########.fr       */
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
		*newstr++ = *s++;
	}
	*newstr = '\0';
	return (newstr - strlen);
}
