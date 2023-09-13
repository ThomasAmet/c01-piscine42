/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:08:02 by tamet             #+#    #+#             */
/*   Updated: 2023/09/12 19:15:33 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* int	main(void)
{
	int	a;
	int	b

	a = a;
	b = 3;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	ft_swap(&a, &b);
	printf("n: %d\n", a);
	printf("k: %d\n", b);
	return (0);
}
 */