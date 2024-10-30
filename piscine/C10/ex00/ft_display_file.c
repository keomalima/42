/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:17:18 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/05 13:40:47 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *av)
{
	char	c;
	int	bytes;
	int	fd_to_read;

	fd_to_read = open(av, O_RDONLY);
	if (fd_to_read == -1)
	{
		write(1, "Cannot read file.", 17);
		return ;
	}
	while ((bytes = read(fd_to_read, &c, sizeof(c))) > 0)
		write(1, &c, sizeof(c));
	close(fd_to_read);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		write (1, "File name missing.", 18);
		return (1);
	}
	if (ac > 2)
	{
		write (1, "Too many arguments.", 19);
		return (1);
	}
	else
		ft_display_file(av[1]);
	return (0);
}
