/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 19:57:49 by fhenry            #+#    #+#             */
/*   Updated: 2016/12/30 19:57:50 by fhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		swap_tmp(char **tmp1, char **tmp2)
{
	char	*tmp3;

	tmp3 = *tmp1;
	*tmp1 = *tmp2;
	*tmp2 = tmp3;
}

int			main(int ac, char **av)
{
	int		i;
	int		cmp;
	char	**tmp;

	i = 0;
	tmp = av;
	while (++i + 1 < ac)
	{
		cmp = ft_strcmp(tmp[i], tmp[i + 1]);
		if (cmp <= 0)
			i++;
		else
		{
			swap_tmp(&tmp[i], &tmp[i + 1]);
			i = 0;
		}
	}
	i = 1;
	while (tmp[i])
	{
		ft_putstr(tmp[i++]);
		ft_putchar('\n');
	}
	return (0);
}
