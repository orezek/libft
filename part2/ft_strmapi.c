/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:06 by orezek            #+#    #+#             */
/*   Updated: 2023/10/25 12:09:23 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		str_len;
	int		index;
	char	*ptr;

	str_len = ft_strlen(s);
	index = 0;
	ptr = malloc(str_len + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (*s)
		*ptr++ = f(index++, *s++);
	return (ptr - str_len);
}
