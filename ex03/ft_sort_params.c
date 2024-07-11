/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:30:14 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/08 20:01:55 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	is_word_equal(char a, char b)
{
	return (a == b);
}

char	is_greater(char a, char b)
{
	return (a > b);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ok;

	ok = 1;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (!is_word_equal(s1[i], s2[i]))
		{
			if (is_greater(s1[i], s2[i]))
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		i++;
	}
	return (0);
}

void	write_words(int argc, char **c)
{
	int	i;
	int	leng;

	i = 1;
	leng = 0;
	while (i < argc)
	{
		leng = 0;
		while (c[i][leng])
		{
			write(1, &c[i][leng], 1);
			leng++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;
	int		leng;

	j = 1;
	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) == 1)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
		}
		i++;
	}
	write_words(argc, argv);
}
