#include<stdio.h>

int main(){
    int num;
    printf("ENter the number: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        int cal = num*i;
        printf("2 * %d = %d\n", i, cal);
    }

    return 0;
}