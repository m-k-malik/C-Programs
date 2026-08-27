#include<stdio.h>

int main(){

    int a=10, b=20;
    printf("Before operation!\n");
    printf("a = %d\nb = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After operation!\n");
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}