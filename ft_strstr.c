/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:16 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/10 17:22:35 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*h;

	h = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (h);
	while (needle[j] != h[i] && h[i])
		i++;
	while (h[i] && needle[j])
	{
		while (needle[j] == h[i + j] && needle[j])
			j++;
		if (needle[j] != '\0')
			j = 0;
		else
			return (h + i);
		i++;
	}
	return (NULL);
}
