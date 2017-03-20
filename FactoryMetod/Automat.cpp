#include "Automat.h"
#include "AutomatBullet.h"

AbstractBullet* Automat::CreateBullet()
{
	return new AutomatBullet();
}