/* *************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:28:05 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:59:16 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
Convierte el caracter "c" a su correspondiente en minúscula, si es una 
letra mayúscula.
Si "c" no es una letra mayúscula, devuelve "c" sin cambios.
Devuelve el caracter convertido o sin cambios como un entero.

Converts the character "c" to its corresponding lowercase, if it is a
capital letter.
If "c" is not an uppercase letter, return "c" unchanged.
Returns the converted or unchanged character as an integer.
*/