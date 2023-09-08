/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:36:28 by jferreir          #+#    #+#             */
/*   Updated: 2021/10/21 12:30:52 by jferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	if (str[index] == (char)c)
		return ((char *)str);
	while (str[index++] != '\0')
		if (str[index] == (char)c)
			return ((char *)str + index);
	return (NULL);
}
