#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 33;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;//pGrade=pointer variable.  &grade= Storing a pointer

    printf("age's memory addres: %p\n", &age);
    return 0;
}
