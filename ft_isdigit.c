/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:02:34 by gumendes          #+#    #+#             */
/*   Updated: 2025/07/08 11:43:47 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/** @brief See if it is a digit (0-9)
 *  @param c  Character
 *  @return Returns 1 if not found and 0 if found
*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
