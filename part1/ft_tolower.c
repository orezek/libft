/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:37:03 by orezek            #+#    #+#             */
/*   Updated: 2023/10/20 09:11:11 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
	if (letter >= 'A' & letter <= 'Z')
		return (1);
	return (0);
}

int	ft_tolower(int c)
{
	if (ft_isalpha(c) && ft_isupper(c))
		return (c + 32);
	return (c);
}
