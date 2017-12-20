/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:15 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/08 14:14:59 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;

	tmp = f(lst);
	if (!lst || !f)
		return (NULL);
	list = ft_lstnew(tmp->content, tmp->content_size);
	tmp2 = list;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		list->next = ft_lstnew(tmp->content, tmp->content_size);
		{
			list = list->next;
			lst = lst->next;
		}
	}
	return (tmp2);
}
