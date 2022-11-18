//Functions Returning pointers...
#include<stdio.h>
int main(){
    int *biggerNumber(int *a,int *b);
    int x,y,biggerValue;
    scanf("%d%d",&x,&y);
    biggerValue=biggerNumber(&x,&y);
    printf("The bigger number is %d",biggerValue);
    return 0;
}
int *biggerNumber(int *a,int *b)
{
    if(*a>*b)
        return *a;
    else
        return *b;
}