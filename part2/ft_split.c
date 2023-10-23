/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:37:52 by orezek            #+#    #+#             */
/*   Updated: 2023/10/23 11:33:28 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_create_substring(char *str, char *sub_start)
{
	char	*sub;
	int		i;
	int		n;

	i = 0;
	n = str - sub_start;
	sub = malloc((n + 1) * sizeof(char));
	while (i < n)
	{
		if (*sub_start)
			sub[i++] = *sub_start++;
	}
	sub[n] = '\0';
	return (sub);
}

int	is_separator(char c, char *sep)
{
	while (*sep)
	{
		if (*sep == c)
			return (1);
		else
			sep++;
	}
	return (0);
}

int	ft_substr_count(char *str, char *sep)
{
	int	in_sub_str;
	int	counter;

	in_sub_str = 0;
	counter = 0;
	while (*str)
	{
		if (!is_separator(*str, sep) && in_sub_str == 0)
			in_sub_str = 1;
		else if (is_separator(*str, sep) && in_sub_str == 1)
		{
			in_sub_str = 0;
			counter ++;
		}
		str++;
	}
	if (in_sub_str)
		counter++;
	return (counter);
}

char	*ft_sub(char **str, char *sep)
{
	int		in_sub_str;
	char	*sub_start_position;

	in_sub_str = 0;
	sub_start_position = NULL;
	while (**str)
	{
		if (!is_separator(**str, sep) && in_sub_str == 0)
		{
			in_sub_str = 1;
			sub_start_position = *str;
		}
		else if (is_separator(**str, sep) && in_sub_str == 1)
		{
			in_sub_str = 0;
			return (sub_start_position);
		}
		(*str)++;
	}
	if (in_sub_str)
		return (sub_start_position);
	return (0);
}

char	**ft_split(char *str, char *sep)
{
	char	**array_of_sub;
	char	*sub_start;
	int		i;
	int		sub_count;

	if (*str == '\0')
		return (0);
	sub_count = ft_substr_count(str, sep);
	array_of_sub = malloc((sub_count + 1) * sizeof(char *));
	sub_start = NULL;
	i = 0;
	while (i < sub_count)
	{
		sub_start = ft_sub(&str, sep);
		array_of_sub[i] = ft_create_substring(str, sub_start);
		i++;
	}
	array_of_sub[i] = NULL;
	return (array_of_sub);
}
