/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_void_swap.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:16 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 21:06:16 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_void_swap(void *a, void *b)
{
	unsigned char	tmp;
	unsigned char	*a1;
	unsigned char	*b1;

	a1 = (unsigned char *)a;
	b1 = (unsigned char *)b;
	tmp = *a1;
	*a1 = *b1;
	*b1 = tmp;
}
