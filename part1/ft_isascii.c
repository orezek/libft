/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:42 by orezek            #+#    #+#             */
/*   Updated: 2023/10/19 18:57:22 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	unsigned char	letter;

	if (c == EOF)
		return (0);
	letter = (unsigned char) c;
	if (letter >= 0 && letter <= 127)
		return (1);
	return (0);
}
