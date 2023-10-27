/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstiter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:34:29 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/27 22:46:46 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void change (void *content)
{
	char *s = (char*) content;
	while(*s++ != '\0')
		write(1, s, 1);
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
	f = change;
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
	//ft_lstclear(&head, f);
	ft_lstiter(head, f);
	write(1, "\n", 1);
	while(head != NULL)
	{
		write(1, head->content, sizeof(head->content));
		write(1, "\n", 1);
		head = head->next;
	}
	return (0);
}
