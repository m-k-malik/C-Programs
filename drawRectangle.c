#include<stdio.h>

int main(){
    int l,h,i,j;
    printf("Enter the length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the height of rectangle: ");
    scanf("%d",&h);
    for(i=1; i<=h; i++){
        for(j=1; j<=l; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}