/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:51:32 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:51:34 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Point.hpp"

Fixed	isleft( Point const a, Point const b, Point const point)
{
	return (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {

	if (isleft(a, b, point) * isleft(b, c, point) > 0
	 && isleft(b, c, point) * isleft(c, a, point) > 0
	 && isleft(c, a, point) * isleft(a, b, point) > 0)
		return true;
	return false;
}
