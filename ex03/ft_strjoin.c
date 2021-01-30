/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:36:30 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/30 15:06:26 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		i++;
	}
	j = j + (ft_strlen(sep) * (size - 1));
	if (!(dest = malloc(sizeof(char) * j)))
		return (NULL);
	i = 0;
	dest[0] = 0;
	while (i <= size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
