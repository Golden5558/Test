/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberthal <nberthal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:08:27 by nberthal          #+#    #+#             */
/*   Updated: 2025/02/12 05:47:36 by nberthal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_philo	*ft_lstnew()
{
	t_philo	*data;

	data = malloc(sizeof(t_philo));
	if (!data)
		return (NULL);
	data->next = NULL;
	return (data);
}

void	ft_lstclear(t_philo **lst)
{
	t_philo	*current;
	t_philo	*next;

	if (!lst || !(*lst))
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

t_philo	*ft_lstlast(t_philo *lst)
{
	if (!lst)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_philo *lst)
{
	int				i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_back(t_philo **lst, t_philo *new)
{
	t_philo	*prev;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		prev = ft_lstlast(*lst);
		prev->next = new;
	}
}
