#include <iostream>
#include <vector>
#include "AbstractWeapon.h"
#include "Automat.h"
#include "AbstractBullet.h"
#include "AutomatBullet.h"

int main()
{
	std::vector<AbstractWeapon*> weapons;
	weapons.push_back(new Automat());
	
	AbstractBullet* bullet = (**(weapons.end()-1)).CreateBullet();

	bullet->setLocation(Point3D(23, 43, 2));

	return 0;
}