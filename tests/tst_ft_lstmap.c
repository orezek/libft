/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:54:10 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/28 21:26:02 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// cc tst_ft_lstmap.c ../bonus/ft_lstmap.c ../bonus/ft_lstnew.c ../bonus/ft_lstadd_back.c ../bonus/ft_lstclear.c ../bonus/ft_lstlast.c && ./a.out

void	*multiply (void *content)
{
	int	*con;

	con = (int*) content;
	*con *= 5;
	return (con);
}

int	main (void)
{
	t_list	*a, *b, *c, *d, *head, *new_list;
	int		ac = 1, bc = 2, cc = 3, dc = 4;
	t_list new;

	head = NULL;
	new_list = NULL;
	a = ft_lstnew(&ac);
	b = ft_lstnew(&bc);
	c = ft_lstnew(&cc);
	d = ft_lstnew(&dc);

	ft_lstadd_back(&head, a);
	ft_lstadd_back(&head, b);
	ft_lstadd_back(&head, c);
	ft_lstadd_back(&head, d);

	printf("%p\n", head->next->next->next);
	printf("%p\n", d);
	int	*t = (int *) head->next->content;
	int	val1 = *t;
	printf("%d\n", val1);

	new_list = ft_lstmap(head, multiply, free);
	int *i = (int *)new_list->next->content;
	int val = *i;
	printf("%d\n", val);
	printf("%p\n", new_list->next->next->next);


}
