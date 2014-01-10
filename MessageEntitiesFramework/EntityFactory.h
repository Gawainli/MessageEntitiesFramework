#ifndef EntityFactory_h__
#define EntityFactory_h__

#include "IFactory.h"

class Entity;

class EntityFactory: public Factory<Entity>
{
public:
	EntityFactory();
	virtual ~EntityFactory();
	virtual Entity* create();


protected:

};


#endif // EntityFactory_h__
