#ifndef ABSTRACTBULLET_H
#define ABSTRACTBULLET_H

class Point3D
{
	double x;
	double y;
	double z;
public:
	Point3D() {}
	Point3D(double x, double y, double z)
		:x(x), y(y), z(z)
	{}
};

class Vector3D
{
	double x;
	double y;
	double z;
public:
	Vector3D(){}
	Vector3D(double x, double y, double z)
		:x(x), y(y), z(z)
	{}

};

class AbstractBullet
{
protected:
	Point3D location;
	Vector3D direction;
public:
	AbstractBullet(){}
	virtual void setLocation(const Point3D&)=0;
	virtual Point3D getLocation()=0;
	virtual void setDirection(const Vector3D&)=0;
	virtual Vector3D getdirection()=0;
};

#endif