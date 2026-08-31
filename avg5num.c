#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter all five numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int Avg=(a+b+c+d+e)/5;
    printf("Here is the Avg: %d",Avg);
    return 0;
}