/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:08:02 by tamet             #+#    #+#             */
/*   Updated: 2023/09/08 15:18:17 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// int	main(void)
// {
// 	int	n;
// 	int	k;
// 	int	*a;
// 	int	*b;

// 	n = 2;
// 	k = 3;
// 	a = &n;
// 	b = &k;
// 	printf("n: %d\n", n);
// 	printf("k: %d\n", k);
// 	ft_swap(a, b);
// 	printf("n: %d\n", n);
// 	printf("k: %d\n", k);
// 	return (0);
// }
