/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:21:40 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/05 20:59:10 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include<stdio.h>
int main(int ac, char **av)
{
	int res;
	int a;
	int b;
	//res = 0;
	if(ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if( av[2][0] == '-')
			res = a - b;
		else if( av[2][0] == '+')
			res = a + b;
		else if( av[2][0] == '*')
			res = a * b;
		else if( av[2][0] == '/')
			res = a / b;
		if( av[2][0] == '%')
			res = a % b;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
}