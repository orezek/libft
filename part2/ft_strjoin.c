/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:01 by orezek            #+#    #+#             */
/*   Updated: 2023/10/23 11:32:02 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_array_len(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

int	ft_total_length(int size, char **str)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

char	*ft_concatenate_str(int size, char **strs, char *new_str, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	s;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			new_str[k++] = strs[i][j];
			j++;
		}
		if (*sep != '\0')
		{
			s = 0;
			while (s < ft_array_len(sep))
				new_str[k++] = sep[s++];
		}
		i++;
	}
	new_str[k - ft_array_len(sep)] = '\0';
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;

	if (size == 0)
	{
		new_str = malloc(1);
		if (new_str != NULL)
		{
			new_str[0] = '\0';
			return (new_str);
		}
	}
	new_str = malloc(ft_total_length(size, strs) + (ft_array_len(sep) * size));
	ft_concatenate_str(size, strs, new_str, sep);
	return (new_str);
}
