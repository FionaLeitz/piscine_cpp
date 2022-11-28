#include "../headers/Point.hpp"

int	isleft( Point const a, Point const b, Point const point)
{
	if ((b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX()) >= 0)
		return 0;
	return 1;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {

	if (isleft(a, b, point) == 0 || isleft(b, c, point) == 0 || isleft(c, a, point) == 0)
		return false;
	return true;

}