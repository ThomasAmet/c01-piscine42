/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:17:54 by tamet             #+#    #+#             */
/*   Updated: 2023/09/08 23:37:40 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*p_div;
// 	int	*p_mod;

// 	a = 20;
// 	b = 3;
// 	p_div = &a;
// 	p_mod = &b;
// 	ft_div_mod(a, b, p_div, p_mod);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return (0);
// }
