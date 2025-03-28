/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberthal <nberthal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:23:12 by nberthal          #+#    #+#             */
/*   Updated: 2025/02/06 01:34:22 by nberthal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include "../libft/libft.h"

typedef struct s_cmd
{
	char			*path;
	char			**cmd_args;
	int				index;
	int				cmd_found;
	struct s_cmd	*next;
}	t_cmd;

t_cmd	*ft_lstnew(char *cmd, char **cmd_args, int index, int cmd_found);
t_cmd	*ft_lstlast(t_cmd *lst);
void	ft_lstadd_back(t_cmd **lst, t_cmd *new);
int		ft_lstsize(t_cmd *lst);
void	ft_lstclear(t_cmd **lst);

#endif