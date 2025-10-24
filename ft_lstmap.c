/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:48:04 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/24 14:58:11 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}

	return (NULL);
}

void	del(void *content)
{
	free(content);
}

void *to_uppercase(void *content)
{
	char *str = ft_strdup((char *)content);
	for (int i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

int main(void)
{
	t_list *list = NULL;
	t_list *n1 = ft_lstnew(ft_strdup("primeiro"));
	t_list *n2 = ft_lstnew(ft_strdup("segundo"));
	t_list *n3 = ft_lstnew(ft_strdup("terceiro"));

	ft_lstadd_back(&list, n1);
	ft_lstadd_back(&list, n2);
	ft_lstadd_back(&list, n3);

	printf("Antes de ft_lstiter:\n");
	for (t_list *tmp = list; tmp; tmp = tmp->next)
		printf("%s\n", (char *)tmp->content);
	ft_lstmap(list, to_uppercase, del);
	printf("\nDepois de ft_lstiter:\n");
	for (t_list *tmp = list; tmp; tmp = tmp->next)
		printf("%s\n", (char *)tmp->content);
	return 0;
}
