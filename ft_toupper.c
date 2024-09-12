/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:04:42 by mmilitar          #+#    #+#             */
/*   Updated: 2024/09/10 00:35:47 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
