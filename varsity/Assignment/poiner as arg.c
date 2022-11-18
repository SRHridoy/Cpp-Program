// Pointers as Function Arguments...
#include<stdio.h>

int main(){
    void math(int x,int y,int *s,int *d);
    int a,b,c,d;
    a = 10;
    b = 20;
    math(a,b,&c,&d);
    printf("Received multiple values returned by math function %d and %d",c,d);
    return 0;
}
void math(int x,int y,int *s,int *d)
{
    *s = ++x;
    *d = ++y;
}