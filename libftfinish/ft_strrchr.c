/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberthal <nberthal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:19:08 by nberthal          #+#    #+#             */
/*   Updated: 2024/10/18 18:23:46 by nberthal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	*s2;

	s1 = (char *)s;
	s2 = NULL;
	while (*s1)
	{
		if (*s1 == (unsigned char)c)
			s2 = s1;
		s1++;
	}
	if (*s1 == (unsigned char)c)
		s2 = s1;
	return (s2);
}

// int	main(void)
// {
// 	const char s[] = "je chArche a";

// 	printf("%p\n", ft_strrchr(s, 65));
// 	printf("%p\n", strrchr(s, 65));
// }