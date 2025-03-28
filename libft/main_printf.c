/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberthal <nberthal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:08:33 by nberthal          #+#    #+#             */
/*   Updated: 2024/12/03 16:59:13 by nberthal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>


int	main(void)
{
	int	c;

	//Test Char
	ft_printf("Test Char :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%c\n", 'i');
	ft_printf("c == %d\n", c);
	printf("printf :  ");
	c = printf("%c\n", 'i');
	printf("c == %d\n", c);

	//Test String
	// char *a = NULL;
	ft_printf("Test String :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%s\n", "v");
	ft_printf("c == %d\n", c); // gerer si a = NULL
	printf("printf :  ");
	c = printf("%s\n", "v");
	printf("c == %d\n", c);

	//Test decimal
	ft_printf("Test Decimal :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%d\n", 42);
	ft_printf("c == %d\n", c);
	printf("printf :  ");
	c = printf("%d\n", 42);
	printf("c == %d\n", c);

	//Test unsigned decimal
	ft_printf("Test Unsigned Decimal :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%u\n", UINT_MAX);
	ft_printf("c == %d\n", c);
	printf("printf :  ");
	c = printf("%u\n", UINT_MAX);
	printf("c == %d\n", c);

	//Test integer
	ft_printf("Test Integer :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%i\n", -2147483648);
	ft_printf("c == %i\n", c);
	printf("printf :  ");
	c = printf("%i\n", -2147483648);
	printf("c == %i\n", c);

	//Test uhexa
	ft_printf("Test uhexa :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%X\n", 3200000);
	ft_printf("c == %d\n", c);
	printf("printf :  ");
	c = printf("%X\n", 3200000);
	printf("c == %d\n", c);

	//Test lhexa
	ft_printf("Test lhexa :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%x\n", 425464);
	ft_printf("c == %d\n", c);
	printf("printf :  ");
	c = printf("%x\n", 425464);
	printf("c == %d\n", c);

	//Test memory
	ft_printf("Test memory :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%p\n", (void *)0);
	ft_printf("c == %d\n", c);
	printf("printf :  ");
	c = printf("%p\n", (void *)0);
	printf("c == %d\n", c);

	//Test %%
	ft_printf("Test %% :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("ffd  ");
	ft_printf("\nc == %d\n", c);
	printf("printf :   ");
	c = printf("ffd  ");
	printf("\nc == %d\n", c);

	//Test MIX
	ft_printf("Test MIX :\n");
	ft_printf("ft_printf :  ");
	c = ft_printf("%d   %s ", 58, "Testdsfsdf");
	ft_printf("\nc == %d\n", c);
	printf("printf :  ");
	c = printf("%d   %s ", 58, "Testdsfsdf");
	printf("\nc == %d\n", c);
}