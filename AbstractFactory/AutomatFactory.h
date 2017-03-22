#ifndef AUTOMATFACTORY_H
#define AUTOMATFACTORY_H
#include"AbstractWeaponFactory.h"

class AutomatFactory :public AbstractWeaponFactory
{
public:
	AbstractMainBody* createMainBody() ;
	AbstractButt* createButt() ;
	AbstractKnife* createKnife() ;
	AbstractAim* createAim() ;

};



#endif