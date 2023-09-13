/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:00:47 by tamet             #+#    #+#             */
/*   Updated: 2023/09/12 19:18:16 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>
 */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a / *b;
	*b = *a % *b;
	*a = swap;
}
/* 
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("%d", a);
	printf("%d", b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
 */