
#include <stdio.h>

int			ft_recursive_factorial(int nb)
{
	static int		sum;

	if (sum == 0)
		sum = nb;
	else
		sum *= nb;
	if (--nb > 1 && nb < 13)
		ft_recursive_factorial(nb);
	else if (nb < 1 || nb > 12)
		return (0);
	return (sum);
}

//prob factorial 1

int			main()
{
	printf("%d\n", ft_recursive_factorial(1));
	return (0);
}
