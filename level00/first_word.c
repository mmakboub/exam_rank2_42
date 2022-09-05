/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:35:12 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/03 19:41:48 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	while(av[1][i] == 9 || av[1][i] == 32)
		i++; //this while loop will skip all spaces and tabulations before the first word
	while(av[1][i] != 9&& av[1][i] != 32 && av[1][i])
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}