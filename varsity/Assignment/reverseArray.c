//Write a function(using a pointer parameter) that reverses the elements of an array...
#include<stdio.h>
void reversedArrayUsingPointer(int *ptr,int n){
    int j = 1;
    for (int i = 0; i< n/2; i++)
    {
        int temp;
        temp = ptr[i];
        ptr[i] = ptr[n-j];
        ptr[n-j] = temp;
        j++;
    }
}
int main(){
    int n;
    printf("Enter the size of the  Array: ");
    scanf("%d",&n);
    int array[n];
//Taking input-->
    printf("Enter the Array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
//Calling reverse functin-->
    reversedArrayUsingPointer(array,n);
//Printing reversed Array-->
    printf("After reversing--> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
}