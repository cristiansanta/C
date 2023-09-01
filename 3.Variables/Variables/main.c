#include <stdio.h>
#include <stdlib.h>

int main()
{
    char CharacterName [] = "Tom";
    int CharacterAge = 72;
    printf("There once was a man named %s. \n", CharacterName);
    printf("He was %d years old. \n", CharacterAge);
    CharacterAge = 53;
    printf("He really liked the name %s \n", CharacterName);
    printf("but didn't liked being %d \n", CharacterAge);
    return 0;
}
