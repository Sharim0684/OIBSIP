//write a program in c to demonstrate how to handle the pointers in the program

#include <stdio.h>

void main()

{

int* p;

int a;

a=852;

printf(" Here in the declaration p = int pointer, int a= 29\n");

printf(" Address of a : %p\n ",&a);

printf(" Value of a : %d\n",a);

p=&a;

printf("Now p is assigned with the address of a.\n");

printf(" Address of pointer p : %p\n",p);

printf("Content of pointer p : %d\n",*p);

a=563;

printf(" The value of a assigned to 563 now.\n");

printf(" Address of pointer p : %p\n",p);

printf(" Content of pointer p : %d\n",*p);

*p=1954;

printf(" The pointer variable p is assigned the value 1954 now.\n");

printf(" Address of a : %p\n",&a);/*as p contain the address of a – so *p changed the value of a and now a become 1563*/

printf(" Value of a : %d\n\n",a);

}
