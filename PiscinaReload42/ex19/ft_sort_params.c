/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:49:46 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/04 16:13:44 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_params(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	while (a < argc - 1)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				ft_swap(&argv[a], &argv[b]);
			}
			b++;
		}
		a++;
	}
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 1;
	ft_sort_params(argc, argv);
	while (x < argc)
	{
		y = 0;
		while (argv[x][y])
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
