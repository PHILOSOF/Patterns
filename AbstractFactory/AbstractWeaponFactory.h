#ifndef ABSTRACTWEAPONFACTORY_H
#define ABSTRACTWEAPONFACTORY_H

class AbstractMainBody;
class AbstractButt;
class AbstractKnife;
class AbstractAim;

class AbstractWeaponFactory
{
public:
	virtual AbstractMainBody* createMainBody() = 0;
	virtual AbstractButt* createButt() = 0;
	virtual AbstractKnife* createKnife() = 0;
	virtual AbstractAim* createAim() = 0;	
};


#endif