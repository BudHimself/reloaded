/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 18:17:27 by fhenry            #+#    #+#             */
/*   Updated: 2016/12/30 18:55:05 by fhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int	x;
	int	sum;

	x = 2;
	sum = 1;
	if (nb > 1 && < 13)
	{
		while (x <= nb)
			sum *= x++;
		return (sum);
	}
	else if (nb == 1)
		return (1);
	else
		return (0);
}

int			main()
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(-1));
	return (0);
}
