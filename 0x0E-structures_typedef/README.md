# 0x0E-structures_typedef

## dog.h
> Contains function prototypes, typedef and struct declarations.

## 1-init_dog.c
> A function that initializes a variable of type struct dog.
> - Prototype: ``` void init_dog(struct dog *d, char *name, float age, char *owner); ```.

## 2-print_dog.c
> A function  that peints a struct dog.
> - If an element of ``` d ``` is ``` NULL ```, prints ``` (nil) ``` instead of this element. (if name is NULL, print Name: (nil)).
> - if ``` d ``` is ``` NULL ``` nothing is printed.

## 4-new_dog.c
> A function that creates a new dog.
> - Prototype: ``` dog_t *new_dog(char *name, float age, char *owner); ```.
> - A copy of ``` name ``` and ``` owner ``` is stored.
> - Returns ``` NULL ``` if function fails.

## 5-free_dog.c
> A function that frees dogs.
> - Prototype: ``` void free_dog(dog_t *d); ```.

