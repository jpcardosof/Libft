/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:15:03 by jferreir          #+#    #+#             */
/*   Updated: 2021/10/20 10:04:17 by jferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	index = 0;
	while (index < n)
	{
		*(ptr + index) = (unsigned char)c;
		index++;
	}
	return (b);
}
