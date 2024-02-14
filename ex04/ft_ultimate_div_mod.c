/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:18:40 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/13 23:50:43 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = buffer / *b;
	*b = buffer % *b;
}

// int	main(void)
// {
// 	int a = 12;
// 	int b = 5;
// 	int *ptr_to_a = &a;
// 	int *ptr_to_b = &b;
// 	printf("a = %d, b = %d\n", a, b);
// 	ft_ultimate_div_mod(ptr_to_a, ptr_to_b);
// 	printf("(div) a = %d, (mod) b = %d\n", a, b);
// }