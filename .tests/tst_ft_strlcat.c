/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 06:57:36 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/30 13:24:03 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc cc -Wall -Wextra -Werror ./.tests/tst_ft_strlcat.c ft_strlcat.c ft_strlen.c  && ./a.out | cat -e
size_t	eng_ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		length_dest;
	size_t		length_src;

	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	if (size <= length_dest)
		return (length_src + size);
	i = 0;
	while (src[i] && (length_dest + i + 1 < size))
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_src + length_dest);
}

size_t	m_ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dp;
	const char	*sp;
	size_t		sp_len;
	size_t		dp_len;
	size_t		i;

	i = 0;
	dp = dst;
	sp = src;
	sp_len = ft_strlen(sp);
	dp_len = ft_strlen(dp);
	if (size <= dp_len)
		return (size + sp_len);
	dp += dp_len;
	while (*sp && ((dp_len + i) < size - 1))
	{
		*dp++ = *sp++;
		i++;
	}
	*dp = '\0';
	return (dp_len + sp_len);
}

size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);

    if (size == 0 || dst_len >= size - 1) {
        return dst_len + src_len;
    }

    size_t to_copy = (dst_len + src_len >= size) ? size - dst_len - 1 : src_len;
    memcpy(dst + dst_len, src, to_copy);
    dst[dst_len + to_copy] = '\0';

    return dst_len + src_len;
}

int	main (void)
{
	char	str[10] = "a";
	char	src[] = "lorem ipsum dolor sit amet";
	int		result;
	int		result1;
	int		result2;
	int		result3;

	result = ft_strlcat(str, src, 5);
	result1 = strlcat(str, src, 5);
	result2 = m_ft_strlcat(str, src, 5);
	result3 = eng_ft_strlcat(str, src, 5);
	printf("%d\n", result);
	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	//printf("%s\n", str);
	write(1, "\n", 1);
    write(1, str, 15);
	write(1, "\n", 1);
	return (0);

}
