/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:19:33 by abosch            #+#    #+#             */
/*   Updated: 2019/03/06 20:19:49 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"
#include "parsing.h"
#include <stdarg.h>

int		ft_printf(const char *restrict fmt, ...)
{
	va_list	ap;
	int		ret;

	va_start(ap, fmt);
	ret = parsing(ap, (char*)fmt);
	va_end(ap);
	return (ret);
}
