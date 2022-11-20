//A few Pointer Problems-->
#include<stdio.h>

int main(){
    int *x1,*x2,y1[20],y2[30];
    x1 = y1;
    x2 = y2;
    if(x1>x2)
//Here we can't compare two pointers when they point to different objeccts...
    if(x1==x2)
    return 0;
}