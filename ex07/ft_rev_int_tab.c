/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 00:29:34 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/14 01:34:05 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	buffer;

	index = 0;
	while (index < size / 2)
	{
		buffer = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = buffer;
		index++;
	}
}



int	main(void)
{
	int	index = 0;

	int myArray[] = {1, 3, 1, 2, 8};
	while (index < 5)
	{
		printf("Before : myArray[%d] = %d\n", index, myArray[index]);
		index++;
	}
	ft_rev_int_tab(myArray, 5);
	index = 0;
	while (index < 5)
	{
		printf("After : myArray[%d] = %d\n", index, myArray[index]);
		index++;
	}
	return (0);
}
