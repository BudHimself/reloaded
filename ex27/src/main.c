#include "../include/lol.h"

int 			main(int ac, char **av)
{
	int			fd;
	char		line[2];

	fd = 0;
	if (ac > 2)
	{
		ft_putstr("Too many arguments.");
		ft_putchar('\n');
		return (0);
	}
	else if (ac == 1)
	{
		ft_putstr("File name missing.");
		ft_putchar('\n');
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &line, 1) > 0)
		ft_putstr(line);
	return (0);
}
