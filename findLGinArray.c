#include <stdio.h>

int main() {
    int arr[] = {23, 45, 86, 67};
    int max = arr[0];

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("The largest one is: %d", max);

    return 0;
}