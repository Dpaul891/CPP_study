#include<stdio.h>
#include "Person.h"

int main()
{
    Person p1("John");
    Person p2(p1);
    printf("p1.name=%p\n", p1.name);
    printf("p2.name=%p\n", p2.name);
    return 0;
}