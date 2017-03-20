#ifndef AUTOMAT_H
#define	AUTOMAT_H
#include"AbstractBullet.h"
#include"AbstractWeapon.h"

class Automat:public AbstractWeapon
{
public:
	AbstractBullet* CreateBullet();
};


#endif