/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:26:05 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/13 10:35:06 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

// int	main(void)
// {
// 	int a = 42;
// 	int b = 2019;
// 	int *ptr_to_a;
// 	int *ptr_to_b;
// 	ptr_to_a = &a;
// 	ptr_to_b = &b;
// 	printf("Before swap :\na =\t%d\nb =\t%d\n", a, b);
// 	ft_swap(ptr_to_a, ptr_to_b);
// 	printf("After swap :\na =\t%d\nb =\t%d\n", a, b);
// }