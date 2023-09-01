#include <stdio.h>
#include <stdlib.h>
                             //Return Statement
int cube(int num);
/*
{ //double result= num * num * num; //this is a option
  //return result;
    return num * num * num;// This is another option
}
*/
int main()
{
    printf("Answer: %i", cube(4));
    return 0;
}

int cube(int num)
{
    /*double result= num * num * num; //this is a option
      return result;*/
     return num * num * num;// This is another option

}
