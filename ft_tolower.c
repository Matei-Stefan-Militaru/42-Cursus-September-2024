/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:26:49 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 00:34:57 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(unsigned char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
