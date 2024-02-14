/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:08:10 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/13 15:24:32 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a = 10;
// 	int b = 3;
// 	int div = -42;
// 	int mod = -24;
// 	int *ptr_div = &div;
// 	int *ptr_mod = &mod;
// 	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
// 	ft_div_mod(a, b, ptr_div, ptr_mod);
// 	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
// 	a = 42; b = 12;
// 	ft_div_mod(a, b, ptr_div, ptr_mod);
// 	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
// 	a = 27; b = 8;
// 	ft_div_mod(a, b, ptr_div, ptr_mod);
// 	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
// }