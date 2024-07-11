/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:31:30 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/08 15:19:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	leng;

	i = 1;
	while (i < argc)
	{
		leng = 0;
		while (argv[i][leng] != '\0')
		{
			write(1, &argv[i][leng], 1);
			leng++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
