/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:36:30 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/28 16:07:08 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


void	ft_strlen(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		i++
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}



char	*ft_strjoin(int size, char **strs, char *sep)
{

	char *dest;
	int 	 i;
	int 	 j;	
		
	if (!(dest = malloc(sizeof(char) * i + 1)))
	{
		return (NULL);
	}
	while ()


}
