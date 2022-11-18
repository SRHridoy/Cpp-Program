//Write a program using pointers to determine the length of a string.

#include<stdio.h>

int main(){
    char *name = "Danesh";
    int length = 0;
    while (*name!='\0')
    {
        length++;
        name++;                             
    }
    printf("The length of the string is %d",length);
    return 0;
}
