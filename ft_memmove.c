/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgonza <vicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:20:31 by vicgonza          #+#    #+#             */
/*   Updated: 2023/02/26 13:13:56 by vicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copying the memory from src to dest.
 * @param dest This is the pointer to the destination array where the content is
  to be copied,
 * type-casted to a pointer of type void*.
 * @param src The source string.
 * @param n the number of bytes to copy
 * 
 * @return A pointer to the destination string.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = dest;
	s = (char *)src;
	if (s < d)
	{
		while (n--)
			((unsigned char *)d)[n] = ((unsigned char *)s)[n];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
			i++;
		}
	}
	return (dest);
}
