/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberthal <nberthal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:23:12 by nberthal          #+#    #+#             */
/*   Updated: 2025/02/12 05:47:44 by nberthal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include <stdlib.h>

typedef struct s_philo
{
	// pthread_t		*tread_id;
	struct s_philo	*next;
}	t_philo;

t_philo	*ft_lstnew();
t_philo	*ft_lstlast(t_philo *lst);
void	ft_lstadd_back(t_philo **lst, t_philo *new);
int		ft_lstsize(t_philo *lst);
void	ft_lstclear(t_philo **lst);
void	*ft_free_all(char **tab);

#endif