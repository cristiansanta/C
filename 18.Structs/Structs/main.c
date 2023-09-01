#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;//I can give them a major a GPA a age and a name.
    student1.age = 22;
    strcpy(student1.name,"Cristian");
    strcpy(student1.major, "Business");
    student1.gpa = 3.50;

    struct Student student2;//I can give them a major a GPA a age and a name.
    student2.age = 25;
    strcpy(student2.name,"Andres");
    strcpy(student2.major, "Electronics");
    student2.gpa = 3.9;

    printf("%f\n", student1.gpa);
    printf("%d\n", student1.age);
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);

    printf("\n%f\n", student2.gpa);
    printf("%d\n", student2.age);
    printf("%s\n", student2.name);
    printf("%s\n", student2.major);
    return 0;
}
