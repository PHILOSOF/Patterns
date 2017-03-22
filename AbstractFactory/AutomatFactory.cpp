#include"AutomatAim.h"
#include"AutomatButt.h"
#include"AutomatFactory.h"
#include"AutomatKnife.h"
#include "AutomatMainBody.h"
#include "AutomatAim.h"

AbstractMainBody* AutomatFactory::createMainBody()
{
	return new AutomatMainBody();
}
AbstractButt* AutomatFactory::createButt()
{
	return new AutomatButt();
}
AbstractKnife* AutomatFactory::createKnife()
{
	return new AutomatKnife();
}
AbstractAim* AutomatFactory::createAim()
{
	return new AutomatAim();
}
