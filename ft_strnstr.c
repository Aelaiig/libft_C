/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:16 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 21:06:16 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*h;

	h = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (h);
	while (i <= len && needle[j] != h[i] && h[i])
		i++;
	while (i <= len && h[i] && needle[j])
	{
		while (needle[j] == h[i + j] && needle[j] && (i + j) < len)
			j++;
		if (needle[j] != '\0')
			j = 0;
		else
			return (h + i);
		i++;
	}
	return (NULL);
}
