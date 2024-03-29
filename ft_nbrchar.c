/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_nbrchar.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/17 15:29:29 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/17 15:29:29 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_nbrchar(char *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str++ == c)
			count++;
	}
	return (count);
}
