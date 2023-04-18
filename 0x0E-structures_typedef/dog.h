#ifndef DOG_H
#define DOG_H
/**
* struct dog - a dog struct
* @name: dogs name
* @age: dogs age
* @owner: dogs owner
* Description: just defines anew dog
*/


struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);




#endif
