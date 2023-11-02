/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:42 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 12:07:34 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	if (c < 256)
	{
		letter = (unsigned char) c;
		if (letter >= 0 && letter <= 127)
			return (1);
	}
	return (0);
}
