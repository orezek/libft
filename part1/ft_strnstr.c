/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:50 by orezek            #+#    #+#             */
/*   Updated: 2023/10/23 11:28:33 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// needle = string to find
// haystack = string to search in for
// Empty needle => return haystack
// Haystack < needle -> Null
// Needle not found -> Null
// Only the first occurance

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	if (n < 1)
		return (0);
	while (*s1 && (*s1 == *s2) && (i < n))
	{
		s1++;
		s2++;
		i++;
	}
	if (*s1 < *s2)
		return (-1);
	else if (*s1 > *s2)
		return (1);
	return (0);
}

int	ft_len(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_search_for_substring(char *str, char *to_find)
{
	int	step;
	int	inner_step;
	int	success_flag;
	int	length_str;

	length_str = ft_len(str);
	step = 0;
	while (step <= length_str)
	{
		inner_step = step;
		success_flag = 0;
		while (inner_step < (ft_len(to_find) + step))
		{
			if (str[inner_step] == to_find[inner_step - step])
				success_flag += 1;
			inner_step++;
		}
		if (success_flag == ft_len(to_find))
			return (&str[step]);
		step++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	if (ft_len(str) < ft_len(to_find))
		return (NULL);
	if (ft_len(str) == ft_len(to_find))
	{
		if (ft_strncmp(str, to_find, ft_len(str)) == 0)
			return (str);
		else
			return (NULL);
	}
	return (ft_search_for_substring(str, to_find));
}
