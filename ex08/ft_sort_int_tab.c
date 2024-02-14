/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 01:37:31 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/14 02:24:48 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	rank;
	int	search_index;
	int	max_search;
	int	max_search_index;

	rank = 0;
	while (rank < size)
	{
		search_index = 0;
		max_search = tab[0];
		max_search_index = 0;
		while (search_index < size - rank)
		{
			if (tab[search_index] > max_search)
			{
				max_search = tab[search_index];
				max_search_index = search_index;
			}
			search_index++;
		}
		ft_swap(&tab[max_search_index], &tab[size - rank - 1]);
		rank++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

// int	main(void)
// {
// 	int	index = 0;
// 	int myArray[] = {2, 8, 7, 100, 9, 1, 'a', -42};
// 	while (index < 8)
// 	{
// 		printf("%d\t", myArray[index]);
// 		index++;
// 	}
// 	printf("\n");	
// 	ft_sort_int_tab(myArray, 8);
// 	index = 0;
// 	while (index < 8)
// 	{
// 		printf("%d\t", myArray[index]);
// 		index++;
// 	}
// 	return (0);
// }