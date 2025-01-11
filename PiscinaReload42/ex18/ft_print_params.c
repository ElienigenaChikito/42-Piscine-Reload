/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:49:46 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/04 16:09:33 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_params(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	while (a != argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_print_params(argc, argv);
	}
	return (0);
}
