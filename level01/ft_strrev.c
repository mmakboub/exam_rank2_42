/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:42:29 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/06 21:21:22 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}
 char    *ft_strrev(char *str)
 {
	int i= 0;
	int len = ft_strlen(str);
	while(len > i);
	{
		char tmp = str[i];
		str[len] = str[i];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
 }