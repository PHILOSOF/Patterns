#ifndef AUTOMATBULLET_H
#define	AUTOMATBULLET_H
#include"AbstractBullet.h"
class AutomatBullet : public AbstractBullet
{
public:
	AutomatBullet(){}

	void setLocation(const Point3D&) ;
	Point3D getLocation() ;
	void setDirection(const Vector3D&) ;
	Vector3D getdirection();
};

#endif