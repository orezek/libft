/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:14:38 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/27 21:40:17 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_lstclea.c  ../bonus/ft_lstadd_front.c ../part1/ft_strdup.c ../bonus/ft_lstnew.c ../part1/ft_strlen.c ../bonus/ft_lstclear.c ../bonus/ft_lstlast.c&& ./a.out

void del (void *node)
{
	free(node);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*head;
	t_list	*last;
// a pointer to a function
	void (*f)(void*);
// linking a f pointer to function to the actual function del
	f = del;
// always set by defualt a pointer to NULL for preventing undefined behaviour
	head = NULL;
// content initialized by malloc
	char	*ca;
	char	*cb;
	char	*cc;

	ca = ft_strdup("first");
	cb = ft_strdup("second");
	cc = ft_strdup("third");

// created new t_lists for adding them to the chain
	a = ft_lstnew(ca);
	b = ft_lstnew(cb);
	c = ft_lstnew(cc);

// adding the t_lists to the chain
	ft_lstadd_front(&head, a);
	ft_lstadd_front(&head, b);
	ft_lstadd_front(&head, c);


	last = ft_lstlast(head);
	printf("%p\n", c);
	printf("%p\n", b);
	printf("%p\n", a);
	printf("%p\n", head->next->next->next);
	printf("%p\n", head);
	printf("%p\n", last);
	ft_lstclear(&head, f);

	return (0);
}
