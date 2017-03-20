#ifndef ABSTRACTWEAPON_H 
#define ABSTRACTWEAPON_H

class AbstractWeapon
{
public :
	virtual AbstractBullet* CreateBullet() = 0;
};




#endif