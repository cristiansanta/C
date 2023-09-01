#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%d", *&*&age);//*dereferencing variable. &Getting memory address
    return 0;
}
