/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:07:26 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/03 23:55:48 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int count;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
				count = av[1][i] - 64;
			else if (av[1][i] >= 97 && av[1][i] <= 122)
				count = av[1][i] - 121;
			while(count)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			i++;
		}
	}
	write(1, "\n", 1)
}