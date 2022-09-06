/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:25:10 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/05 21:40:01 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	int i;
	char *dst;
	int len;
	i = 0;
	len = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (len - 1));
	if(!dst)
		return(exit(0), NULL);
	while(i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[len] = '\0';
	return(dst);
	
}