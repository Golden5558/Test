/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberthal <nberthal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 05:50:30 by nberthal          #+#    #+#             */
/*   Updated: 2025/01/27 04:24:28 by nberthal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_pile **pile)
{
	t_pile	*tmp1;
	t_pile	*tmp2;

	if (!pile || !(*pile) || !(*pile)->next)
		return ;
	tmp1 = *pile;
	tmp2 = (*pile)->next;
	tmp1->next = tmp2->next;
	if (tmp2->next)
		tmp2->next->prev = tmp1;
	tmp2->prev = NULL;
	tmp2->next = tmp1;
	tmp1->prev = tmp2;
	*pile = tmp2;
}

static void	push(t_pile **pile_1, t_pile **pile_2)
{
	t_pile	*from;
	t_pile	*to;
	t_pile	*temp;

	if (!pile_1 || !(*pile_1))
		return ;
	from = *pile_1;
	temp = from->next;
	to = *pile_2;
	from->next = to;
	from->prev = NULL;
	if (to)
		to->prev = from;
	*pile_2 = from;
	*pile_1 = temp;
	if (*pile_1)
		(*pile_1)->prev = NULL;
}

static void	rotate(t_pile **pile)
{
	t_pile	*new_bottom;
	t_pile	*old_bottom;
	t_pile	*temp;

	if (!pile || !(*pile) || !(*pile)->next)
		return ;
	new_bottom = *pile;
	old_bottom = ft_lstlast(*pile);
	temp = new_bottom->next;
	new_bottom->next->prev = NULL;
	old_bottom->next = new_bottom;
	new_bottom->prev = old_bottom;
	new_bottom->next = NULL;
	*pile = temp;
}

static void	reverse_rotate(t_pile **pile)
{
	t_pile	*new_top;
	t_pile	*old_top;

	if (!pile || !(*pile) || !(*pile)->next)
		return ;
	old_top = *pile;
	new_top = ft_lstlast(*pile);
	new_top->prev->next = NULL;
	new_top->prev = NULL;
	new_top->next = old_top;
	old_top->prev = new_top;
	*pile = new_top;
}

void	apply_operator(t_pile **a, t_pile **b, t_operations op)
{
	if (op == sa)
		return (swap(a), ft_putstr_fd("sa\n", 1), updt_index(a, b));
	if (op == pa)
		return (push(b, a), updt_index(a, b));
	if (op == pb)
		return (push(a, b), updt_index(a, b));
	if (op == ra)
		return (rotate(a), updt_index(a, b));
	if (op == rb)
		return (rotate(b), updt_index(a, b));
	if (op == rra)
		return (reverse_rotate(a), updt_index(a, b));
	if (op == rrb)
		return (reverse_rotate(b), updt_index(a, b));
	if (op == rr)
		return (rotate(a), rotate(b), ft_putstr_fd("rr\n", 1),
			updt_index(a, b));
	if (op == rrr)
		return (reverse_rotate(a), reverse_rotate(b), ft_putstr_fd("rrr\n", 1),
			updt_index(a, b));
}
