/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:06 by orezek            #+#    #+#             */
/*   Updated: 2023/10/19 18:49:27 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int ft_isgraph(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	letter = (unsigned char) c;
	if (letter >= 33 && letter <= 126)
		return (1);
	return (0);
}

int ft_isprint(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	letter = (unsigned char) c;
	if (ft_isgraph(letter) || letter == 32)
		return (1);
	return (0);
}
