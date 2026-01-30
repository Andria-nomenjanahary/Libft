/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvoandri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:48:27 by yvoandri          #+#    #+#             */
/*   Updated: 2026/01/28 11:13:44 by yvoandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

static char	low(unsigned int i, char c)
{
	(void)i;
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	return (c);
}

static void	upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32; 
}

void del(void *lst)
{
	free(lst);
}

void *to_upper(void *content)
{
    char *str = (char *)content;
    char *new = strdup(str);
    int i = 0;

    if (!new)
        return NULL;
    while (new[i])
    {
        if (new[i] >= 'a' && new[i] <= 'z')
            new[i] -= 32;
        i++;
    }
    return new;
}

t_list *create_list(void)
{
	t_list *lst;
	int *n = NULL;
	for (int i = 0; i <= 3; i++)
		ft_lstadd_back(&lst, ft_lstnew(n));
	return lst;
}

void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s ->",(char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	char *r =ft_strdup("coucou");
	printf("%s\n",r);
	free(r);

	char *yvon = "yvYoynijugh";
	printf("%si\n",ft_strrchr(yvon,'y'));

	//char *zaz = "maamzazamaro";
	printf("%s\n",ft_strnstr("","",-1));

	char **tab = ft_split(" Cette phrase sera la derniere ", ' ');
	for (int j = 0;tab[j];j++)
	{
		printf("%s\n",tab[j]);
	}

	char	*res = ft_itoa(1548);
	printf("%s\n",res);
	free(res);

	char *itoa = ft_itoa(INT_MAX);
	printf("%s\n",itoa);
	free(itoa);

	char *mapi = ft_strmapi("HELLO",&low);
	printf("%s\n",mapi);
	free(mapi);

	char *phrase = "efa te hivoka";
	char *resi = ft_strnstr(phrase,"te",4);
	printf("ft_strnstr :%s\n",resi);

	char itery[] = "hello";
	ft_striteri(itery, &upper);
	printf("%s\n",itery);

	ft_putchar_fd('y',1);
	ft_putstr_fd("yvon",1);
	ft_putstr_fd("\n",1);

	ft_putendl_fd("zorze",1);
	ft_putnbr_fd(-482,1);
	ft_putstr_fd("\n",1);

	char nom[] = "abcyvonabcd";
	printf("trim :%s\n",ft_strtrim(nom, "abc"));
	
	char *a = "A";
	t_list *add = ft_lstnew(a);
	printf("ft_lstnew content:%s\n",(char *)add->content);
	printf("ft_lstnew next:%p\n",(char *)add->next);
	free(add);

	t_list *list = NULL;
	ft_lstadd_front(&list, ft_lstnew("FIRST"));
	ft_lstadd_front(&list, ft_lstnew("SECOND"));
	ft_lstadd_front(&list, ft_lstnew("THIRD"));
	printf("ft_lstsize:%d\n",ft_lstsize(list));
	t_list *s = ft_lstlast(list)->content;
	printf("ft_lstlast:%s\n", (char *)s);
	ft_lstadd_back(&list, ft_lstnew("FORTH"));
	while (list)
	{
		printf("ft_lstadd_front:%s\n",(char *)list->content);
		list = list->next;
	}
	free(list);

	char *str = ft_strdup("Hello");
	t_list *node = ft_lstnew(str);
	ft_lstdelone(node,del);
	printf("Node deleted\n");
	
	t_list *lst = NULL;
    t_list *new;

	ft_lstadd_back(&lst, ft_lstnew(strdup("hello")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("world")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("libft")));

	printf("Original list\n");
	print_list(lst);

	new = ft_lstmap(lst, to_upper, del);

	printf("Maped\n");
	print_list(new);

	ft_lstclear(&lst,del);
	ft_lstclear(&new,del);

	return (0);
}
