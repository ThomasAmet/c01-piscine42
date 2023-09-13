/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:53:58 by tamet             #+#    #+#             */
/*   Updated: 2023/09/12 23:22:31 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	ix;
	int	swap;

	ix = 0;
	while (ix < (size / 2))
	{
		swap = *(tab + ix);
		*(tab + ix) = *(tab + size - 1 - ix);
		*(tab + size - 1 - ix) = swap;
		ix++;
	}
}

/* int	main(void)
{
	int	tab_1[5];
	int	i;

	i = 0;
	while (i < 5)
	{
		tab_1[i] = i;
		printf("%d", *(tab_1 + i));
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab_1, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", *(tab_1 + i));
		i++;
	}
	return (0);
}
 */