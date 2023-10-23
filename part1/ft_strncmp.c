/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:43 by orezek            #+#    #+#             */
/*   Updated: 2023/10/23 13:31:48 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	int	start;

	start = 0;
	while (start < (int) size)
	{
		if (*(s1 + start) == '\0' && *(s2 + start) == '\0')
			break ;
		else if (*(s1 + start) < *(s2 + start))
			return (*(s1 + start) - *(s2 + start));
		else if (*(s1 + start) > *(s2 + start))
			return (*(s1 + start) - *(s2 + start));
		start++;
	}
	return (0);
}
