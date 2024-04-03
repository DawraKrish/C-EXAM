// 3number find squred

#include <stdio.h>

void squareElements(int *arr, int n) {
    
    for (int i = 0; i < n; i++) {
        *(arr + i) *= *(arr + i);
    }
}

int main() {
    int arr[100], n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }



   
    squareElements(arr, n);



    
    printf("Squared elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    
    printf("\n");



    return 0;
}

