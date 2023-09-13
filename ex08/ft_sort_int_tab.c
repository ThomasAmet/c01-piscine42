/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:22:28 by tamet             #+#    #+#             */
/*   Updated: 2023/09/13 03:19:55 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>
 */
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
	int	ix;
	int	i;

	ix = 0;
	while (ix < (size -1))
	{
		i = 0;
		while (i < (size - ix - 1))
		{
			if (tab[i] > tab[i + 1])
				ft_swap_int((tab + i), (tab + i + 1));
			i++;
		}
		ix++;
	}
}

/* int	main(void)
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
 */