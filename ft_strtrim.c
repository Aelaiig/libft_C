/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:16 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 21:06:16 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblankn(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int		ft_strlenb(const char *s)
{
	int	i;

	i = 0;
	while (s[i] && ft_isblankn(s[i]))
	{
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(str = ft_strdup(s + ft_strlenb(s))))
		return (NULL);
	str = ft_strrev(str);
	i = 0;
	if (!(str = ft_strdup(str + ft_strlenb(str))))
		return (NULL);
	str = ft_strrev(str);
	return (str);
}
