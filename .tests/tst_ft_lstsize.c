/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:54:24 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 18:31:34 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc ./.tests/tst_ft_lstsize.c ft_lstsize.c ft_lstnew.c ft_strdup.c ft_strlen.c&& ./a.out
int	main(void)
{
	char	c;
	t_list	*lst;
	t_list	*elem;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;

	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = ft_strdup("lorem");
	str2 = ft_strdup("ipsum");
	str3 = ft_strdup("dolor");
	str4 = ft_strdup("sit");

	elem = ft_lstnew(str1);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);

	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	elem->next = NULL;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	elem = NULL;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}
