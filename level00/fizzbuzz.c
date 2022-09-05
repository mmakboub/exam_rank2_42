/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:42:30 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/03 21:30:37 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char caract)
{
	write(1, &caract, 1);
}

void	ft_putnbr(int num)
{
	if(num != 0)
	{
		ft_putnbr(num / 10);
		ft_putchar(num  % 10 + 48);
	}
}
int main()
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}