/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:47:08 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/08 15:24:57 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	leng;

	i = argc - 1;
	while (i < argc)
	{
		if (i < 1)
		{
			return (0);
		}
		leng = 0;
		while (argv[i][leng] != '\0')
		{
			write(1, &argv[i][leng], 1);
			leng++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
