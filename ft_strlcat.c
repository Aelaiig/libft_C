/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:15 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/10 17:31:03 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t size_dst;

	i = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[i] && i < size)
		i++;
	size_dst = i;
	while (src[i - size_dst] && i < size - 1)
	{
		dst[i] = src[i - size_dst];
		i++;
	}
	if (size_dst < size)
		dst[i] = '\0';
	return (size_dst + ft_strlen(src));
}
