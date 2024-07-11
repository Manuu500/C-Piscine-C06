/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:16:14 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/07 21:29:50 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	length;

	length = 0;
	(void) argc;
	while (argv[0][length] != '\0')
	{
		write(1, &argv[0][length], 1);
		length++;
	}
	write(1, "\n", 1);
	return (0);
}
