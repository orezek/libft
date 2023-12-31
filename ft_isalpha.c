/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:30 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 12:01:01 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_islower(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	letter = (unsigned char) c;
	if (letter >= 'a' && letter <= 'z')
		return (1);
	return (0);
}

static	int	ft_isupper(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	letter = (unsigned char) c;
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	if (c < 256)
	{
		letter = (unsigned char) c;
		if (ft_islower(letter) || ft_isupper(letter))
			return (1);
		else
			return (0);
	}
	return (0);
}
