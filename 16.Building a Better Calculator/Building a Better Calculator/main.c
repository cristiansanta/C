#include <stdio.h>
#include <stdlib.h>
/*                                  PROGRAM WITH FUNCTIONS
int main()
{   int var;
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide: \n");
    printf("Choose the operation to do: ");
    scanf("%i", &var);
    if(var==1)
    {
        Add();
    }
    else if(var==2)
    {
        Subtract();
    }
    else if(var==3)
    {
        Multiply();
    }
    else if(var==4)
    {
        Divide();
    }
    else{
        printf("\nInvalid Operator\n");
    }
    return 0;
}

void Add()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
  int Total=num1+num2;
  printf("The result is: %d\n", Total);
}

void Subtract()
{int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
  int Total=num1-num2;
  printf("The result is: %d\n", Total);
}

void Multiply()
{int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
  int Total=num1*num2;
  printf("The result is: %d\n", Total);
}

void Divide()
{int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
  int Total=num1/num2;
  printf("The result is: %d\n", Total);
}*/
int main()                                     //PROGRAM WITH RETORN STATEMENT
{   int num1, num2, var;
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide: \n");
    printf("\nChoose the operation to do: ");
    scanf("%i", &var);
    if(var>4)
    {   printf("\nINVALID OPERATOR\n\n");
        return 0;//------------------------------------->//Break program
    }
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf(" %d\n\n", calculator(var, num1, num2));//Returned Value
   return 0;
}

int calculator(int var, int num1, int num2)
{ //int result;
    if(var==1)
    { printf("\nLa suma es:");
       // result=num1 + num2;
       return num1 + num2;
    }
    else if(var==2)
    { printf("\nLa resta es:");
       // result=num1 - num2;
       return num1 - num2;
    }
    else if(var==3)
    { printf("\nLa multiplicacion es:");
       // result=num1 * num2;
       return num1 * num2;
    }
    else if(var==4)
    { printf("\nLa division es:");
       // result=num1 / num2;
       return num1 / num2;
    }
   // return result;
}
