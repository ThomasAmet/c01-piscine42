/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:30:35 by tamet             #+#    #+#             */
/*   Updated: 2023/09/12 19:55:00 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	int	len;

	len = ft_strlen("Bonjour");
	printf("%d", len);
	return (0);
}
 */