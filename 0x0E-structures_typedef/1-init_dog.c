#include "dog.h"
#include <stdio.h>
/**
* init_dog - init dog
* @name: dogs name
* @age: dogs age
* @owner: dogs owner
*@d: pointer
* Description: just defines anew dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;

}



}



