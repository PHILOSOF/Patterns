
#include "AutomatBullet.h"

AutomatBullet::AutomatBullet(){
	
}

void AutomatBullet::setLocation(const Point3D& loc)
{
	this->location = loc;
}

Point3D AutomatBullet::getLocation()
{
	return this->location;
}

void AutomatBullet::setDirection(const Vector3D& vector)
{
	this->direction = vector;
}
Vector3D AutomatBullet::getdirection()
{
	return this->direction;
}