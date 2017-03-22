#include "AbstractWeaponFactory.h"
#include"AutomatFactory.h"
#include"AbstractAim.h"
#include"AbstractButt.h"
#include"AbstractKnife.h"
#include"AbstractMainBody.h"
#include"AutomatAim.h"
#include"AutomatButt.h"
#include"AutomatKnife.h"
#include"AutomatMainBody.h"

#include <iostream>

int main()
{
	AbstractWeaponFactory* factory = new AutomatFactory();

	AbstractMainBody* mainBodu = factory->createMainBody();
	AbstractAim* aim = factory->createAim();
	AbstractButt* butt = factory->createButt();
	AbstractKnife* knife = factory->createKnife();


	//Automat automat(mainBody, aim, butt, knife);


	return 0;
}