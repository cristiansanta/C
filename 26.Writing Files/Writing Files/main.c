#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "w+");
    fprintf(fpointer, "\nCRISTIAN, SALESMAN");
    fclose(fpointer);
    return 0;
}
