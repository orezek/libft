/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:14:38 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/02 16:28:43 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_lstclea.c  ../bonus/ft_lstadd_front.c ../part1/ft_strdup.c ../bonus/ft_lstnew.c ../part1/ft_strlen.c ../bonus/ft_lstclear.c ../bonus/ft_lstlast.c&& ./a.out

void del (void *node)
{
	free(node);
}

void free_str_ptr(void *str)
{
	free(*((void **)str));
}
int	main(void)
{
	char *res = malloc(1000);
	if (node == NULL)
		sprintf(res, "(null)");
	else {
		sprintf(res, "{node: ptr-> %s}", escape_str((char *)node->content));
	}
	return res;

}
