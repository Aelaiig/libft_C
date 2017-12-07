/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:16 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 21:06:16 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*strrev;
	int		i;
	int		j;

	if (!(strrev = (char *)malloc(sizeof(*strrev) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		strrev[j] = s[i];
		i--;
		j++;
	}
	strrev[j] = '\0';
	return (strrev);
}
