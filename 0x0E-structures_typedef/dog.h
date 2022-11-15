#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: Name
 * @age: Age
 * @owner: not mine
 *
 * Description: description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog _t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t * new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int_strlen(char *s);

#endif