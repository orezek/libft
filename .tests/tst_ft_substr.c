/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_substr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:54:40 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/03 13:01:53 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -fsanitize=address  -Wall -Wextra -Werror ./.tests/tst_ft_substr.c ft_substr.c ft_strlen.c && ./a.out | cat -e
int	main(void)
{
	char	*str;
	char	*strsub;

	str = ft_strdup("0123456789");
	strsub = ft_substr(str, 9, 10);
	printf("%s", strsub);
	free(strsub);
	free(str);
	return (0);
}
