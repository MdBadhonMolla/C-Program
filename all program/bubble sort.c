#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j , chack=0;
    for (i = 0; i < n ; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if the current element is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                printf("%d , %d\n",arr[j],arr[j+1]);
                chack = 1;
            }
        }
        //array are sorted before complete the i loop
        if(chack == 0){
            break;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array size : %d\n",n);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
printf("\n");
    bubble_sort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
