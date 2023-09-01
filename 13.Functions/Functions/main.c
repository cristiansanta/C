#include <stdio.h>
#include <stdlib.h>
              //Functions
int main()
{
    SayHi("Raul", 52);
    SayHi("Maria", 53);
    SayHi("Cristian", 25);
    return 0;
}

void SayHi(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}
