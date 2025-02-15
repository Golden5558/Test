/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberthal <nberthal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:41:06 by nberthal          #+#    #+#             */
/*   Updated: 2025/01/26 10:09:26 by nberthal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_digits(const char *nb, int *valid, int i, int sign)
{
	long	result;

	result = 0;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		result = (result * 10) + (nb[i++] - '0');
		if ((sign == 1 && result > INT_MAX)
			|| (sign == -1 && (result * -1) < INT_MIN))
			return (*valid = 0, 0);
	}
	if (nb[i] != '\0' || (i == 0 || (i == 1 && (nb[0] == '+' || nb[0] == '-'))))
		*valid = 0;
	return ((int)(sign * result));
}

int	ft_atoi_verif(const char *nb, int *valid)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	*valid = 1;
	while (nb[i] == 32 || (nb[i] >= 9 && nb[i] <= 13))
		i++;
	if (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i++] == '-')
			sign = -1;
	}
	return (handle_digits(nb, valid, i, sign));
}
