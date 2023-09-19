/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:22:28 by tamet             #+#    #+#             */
/*   Updated: 2023/09/13 07:21:18 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// Bubble Sort Alg
void	ft_swap_int(int*a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	if (size < 2)
		return ;
	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i +1])
			ft_swap_int((tab + i), (tab + i + 1));
		i++;
	}
	ft_sort_int_tab(tab, size - 1);
	return ;
}

int	main(void)
{
	int	i;
	int	tab[5];

	tab[0] = 52;
	tab[1] = 23;
	tab[2] = 2;
	tab[3] = 89;
	tab[4] = -1;
	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		printf(",");
		i++;
	}
}
